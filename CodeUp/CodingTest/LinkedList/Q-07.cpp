#include <iostream>
#include <list>
using namespace std;

template<typename T>
class List{
    struct Node{
        T data;
        Node* next = nullptr;
    };

public:
    List(){
        mHead = nullptr;
        mTail = nullptr;
    }

    ~List(){
        Node* p = mHead;
        while (p != nullptr){
            mHead = p->next;
            delete p;
            p = mHead;
        }
    }

    void push_back(T data){
        Node* node = new Node();
        node->data = data;

        if (mHead == nullptr){
            mHead = node;
            mTail = node;
        } else{
            mTail->next = node;
            mTail = node;
        }
    }

    List<int> sum(List<int>& target){
        // a 구하기
        int a = 0;

        Node* p = mHead;
        int value = 1;
        while (p != nullptr){
            a += p->data * value;

            p = p->next;
            value *= 10;
        }

        // b 구하기
        int b = 0;
        p = target.mHead;
        value = 1;
        while (p != nullptr){
            b += p->data * value;

            p = p->next;
            value *= 10;
        }

        int sum = a + b;

        // 각 자릿 수를 result에 채우기
        List<int> result;
        // 1자리 부터 채워야 함
        while (sum > 0){
            result.push_back(sum % 10);
            sum /= 10;
        }

        return result;
    }

    void print(){
        Node* p = mHead;
        while (p != nullptr){
            cout << p->data << endl;

            p = p->next;
        }
    }
private:
    Node* mHead;
    Node* mTail;
};

int main(){
    List<int> intListA;
    intListA.push_back(2);
    intListA.push_back(4);
    intListA.push_back(3);

    List<int> intListB;
    intListB.push_back(5);
    intListB.push_back(6);
    intListB.push_back(4);

    List<int> result = intListA.sum(intListB);

    result.print();
    return 0;
}



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

    // 뒤에서 num번째
    void eraseFromEnd(int num){
        int length = 0;

        Node* p = mHead;
        while (p != nullptr){
            length++;

            p = p->next;
        }

        p = mHead;
        int target = length - num;
        Node* prev = nullptr;
        for (int i = 0; i < target; i++) {
            prev = p;
            p = p->next;
        }

        if (p == mHead) mHead = p->next;
        else prev->next = p->next;
        if (p == mTail) mTail = prev;
        delete p;
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

int main()
{
    List<int> intList;
    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);
    intList.push_back(4);
    intList.push_back(5);

    intList.eraseFromEnd(2);

    intList.print();
    return 0;
}

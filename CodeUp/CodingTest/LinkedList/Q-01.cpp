#include <iostream>
#include <list>
using namespace std;

template<typename T>
class List{
public:
    struct Node{
        T data;
        Node* next = nullptr;
    };

    List(){
        mHead = nullptr;
        mTail = nullptr;
    }

    ~List(){
        Node* p = mHead;
        while (p != nullptr){
            mHead = p->next;
            delete p;
            p = nullptr;
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

    void erase(T data){
        Node* p = mHead;
        Node* prev = nullptr;
        while (p != nullptr){
            if (p->data == data){
                // 삭제
                if (p == mHead) mHead = p->next;
                else prev->next = p->next;

                delete p;
                return;
            }

            prev = p;
            p = p->next;
        }
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

    intList.push_back(4);
    intList.push_back(5);
    intList.push_back(1);
    intList.push_back(9);

    intList.erase(1);

    intList.print();
    return 0;
}

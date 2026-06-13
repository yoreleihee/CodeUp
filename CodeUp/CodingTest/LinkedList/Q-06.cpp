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

    bool hasCycle(){
        Node* arr[1000];
        int count = 0;

        Node* p = mHead;
        while (p != nullptr){
            for (int i = 0; i < count; ++i)
            {
                if (arr[i] == p){
                    return true;
                }
            }
            arr[count++] = p;
            p = p->next;
        }

        return false;
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



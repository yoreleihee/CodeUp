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

    void reverse(){
        Node* prev = nullptr;
        Node* curr = nullptr;
        Node* next = mHead;

        mTail = mHead;
        while (next != nullptr){
            prev = curr;
            curr = next;
            next = next->next;

            curr->next = prev;
        }

        mHead = curr;
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

    intList.reverse();

    intList.print();
    return 0;
}

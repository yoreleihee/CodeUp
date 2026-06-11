#include <iostream>
#include <list>
using namespace std;

template <typename T>
class List{
public:
    struct Node{
        T data;
        Node* back;
    };

    struct iterator{
        Node* p;

        bool operator!=(const iterator& other) const{
            return p != other.p;
        }

        void operator++(){

        }

        T operator*(){

        }
    };

    List(){
        mHead = nullptr;
        mTail = nullptr;
    }

    ~List(){
        Node* p = mHead;
        while (p != nullptr){
            mHead = p->back;
            delete p;
            p = nullptr;
            p = mHead;
        }
    }

    void push_back(T data) {
        Node* node = new Node();
        node->data = data;
        if (mHead == nullptr) {
            mHead = node;
            mTail = node;
        } else {
            mTail->back = node;
            mTail = node;
        }
    }

    void push_front(T data) {
        Node* node = new Node(data);
        node->back = mHead;
        mHead = node;
        if (mTail == nullptr)
            mTail = node;
    }

    void erase(T data) {
        Node* p = mHead;
        Node* prev = nullptr;
        while (p != nullptr) {
            if (p->data == data) {
                if (p == mHead) mHead = p->back;
                else prev->back = p->back;
                if (p == mTail) mTail = prev;
                delete p;
                return;
            }
            prev = p;
            p = p->back;
        }
    }

    void insert(T data, int position){
        Node* p = mHead;
        Node* node = new Node;
        node->data = data;
        while (p != nullptr){
            if (p->data == position){
                node->back = p->back;
                p->back = node;

                if (p == mTail){
                    mTail = node;
                }

                return;
            }
            p = p->back;
        }
    }

    void print(){
        Node* p = mHead;
        while (p != nullptr){
            cout << p->data << endl;
            p = p->back;
        }
    }

    void reverse(){
        Node* prev = nullptr;
        Node* curr = nullptr;
        Node* next = mHead;

        while (next != nullptr){
            prev = curr;
            curr = next;
            next = next->back;
            curr->back = prev;
        }

        mHead = curr;
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
//    intList.push_back(4);
//    intList.push_back(5);

    intList.reverse();

    intList.print();

    return 0;
}

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
            p = mHead;
        }
    }

    Node* getTail() { return mTail; }

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

    Node* intersection(List<T>& target){
        Node* p1 = mHead;
        Node* p2 = target.mHead;

        while (p1 != p2){
            if (p1 == nullptr){
                p1 = mHead;
            } else{
                p1 = p1->next;
            }

            if (p2 == nullptr){
                p2 = target.mHead;
            } else{
                p2 = p2->next;
            }
        }

        return p1;
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
    List<int>::Node* c1 = new List<int>::Node();
    c1->data = 8;
    List<int>::Node* c2 = new List<int>::Node();
    c2->data = 4;
    List<int>::Node* c3 = new List<int>::Node();
    c3->data = 5;
    c1->next = c2;
    c2->next = c3;

    List<int> listA;
    listA.push_back(4);
    listA.push_back(1);
    listA.getTail()->next = c1;

    List<int> listB;
    listB.push_back(5);
    listB.push_back(6);
    listB.push_back(1);
    listB.getTail()->next = c1;

    auto* p = listA.intersection(listB);
    cout << ((p == nullptr) ? 0 : p->data) << endl;  // 8

    listA.getTail()->next = nullptr;
    listB.getTail()->next = nullptr;
    delete c1; delete c2; delete c3;

    return 0;
}



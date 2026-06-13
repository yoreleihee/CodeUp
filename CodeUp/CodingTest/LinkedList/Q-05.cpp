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

    bool isPalindrome(){
        int length = 0;

        Node* p = mHead;
        while (p != nullptr){
            length++;
            p = p->next;
        }

        // length
        Node* n1 = mHead;
        for (int i = 0; i < (length / 2); ++i)
        {
            Node* n2 = mHead;
            for (int j = 0; j < (length - i) - 1; ++j)
            {
                n2 = n2->next;
            }

            if (n1->data != n2->data){
                return false;
            }

            n1 = n1->next;
        }

        return true;
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
    List<int> intListA;

    intListA.push_back(1);
    intListA.push_back(2);
    intListA.push_back(2);
    intListA.push_back(1);

    cout << intListA.isPalindrome();
    return 0;
}

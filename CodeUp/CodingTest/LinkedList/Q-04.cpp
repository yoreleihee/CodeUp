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

    List<int> merge(List<int>& target){
        List<int> result;

        Node* aNode = mHead;
        Node* bNode = target.mHead;

        while (aNode != nullptr && bNode != nullptr){
            if (aNode->data > bNode->data){
                result.push_back(bNode->data);
                bNode = bNode->next;
            } else if (aNode->data < bNode->data){
                result.push_back(aNode->data);
                aNode = aNode->next;
            } else{
                result.push_back(aNode->data);
                result.push_back(bNode->data);
                aNode = aNode->next;
                bNode = bNode->next;
            }
        }

        while (aNode != nullptr){
            result.push_back(aNode->data);
            aNode = aNode->next;
        }

        while (bNode != nullptr){
            result.push_back(bNode->data);
            bNode = bNode->next;
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

int main()
{
    List<int> intListA;
    List<int> intListB;

    intListA.push_back(1);
    intListA.push_back(2);
    intListA.push_back(4);

    intListB.push_back(1);
    intListB.push_back(3);
    intListB.push_back(4);

    List<int> resultList = intListA.merge(intListB);
    resultList.print();
    return 0;
}

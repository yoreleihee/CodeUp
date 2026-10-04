#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void AddNode(int data){
    if (head == nullptr){
        head = new Node;
        head->data = data;

        tail = head;
    } else{
        tail->next = new Node;
        tail->next->data = data;
        tail->next->next = nullptr;

        tail = tail->next;
    }
}

int main()
{
    AddNode(3);
    AddNode(5);
    AddNode(4);

    for (Node* p = head; p != nullptr; p = p->next)
    {
        cout << p->data;
    }

    return 0;
}

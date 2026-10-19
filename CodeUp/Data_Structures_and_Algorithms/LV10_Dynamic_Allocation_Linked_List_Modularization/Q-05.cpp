#include <iostream>
using namespace std;

struct Node {
    Node* next = nullptr;
    int data = 0;

    Node(int data) : data(data) {}
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(int data){
    Node* node = new Node(data);

    if (head == nullptr){
        head = node;
        tail = head;
    } else{
        tail->next = node;
        tail = tail->next;
    }
}
int main()
{
    addNode(3);
    addNode(5);
    addNode(4);
    addNode(2);

    Node* p = head;
    while (p != nullptr){
        cout << p->data << " ";
        p = p->next;
    }
    return 0;
}
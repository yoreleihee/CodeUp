#include <iostream>
using namespace std;

struct Node {
    Node* next = nullptr;
    char data = 0;

    Node(char data) : data(data) {}
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
    for (int i = 0; i < 5; ++i)
    {
        char data;
        cin >> data;
        addNode(data);
    }

    cout << tail->data;
    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    int data = 0;

    Node(int data) : data(data) {}
};

Node* AddNode(int data, Node* parent = nullptr, string direct = "") {
    Node* node = new Node(data);

    if (parent == nullptr) return node;

    if (direct == "left") parent->left = node;
    else if (direct == "right") parent->right = node;

    return node;
}

int main()
{
    Node* head = AddNode(3);
    AddNode(7, head, "left");
    Node* node = AddNode(6, head, "right");
    AddNode(2, node, "left");
    return 0;
}
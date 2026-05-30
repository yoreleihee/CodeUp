#include <iostream>
using namespace std;

struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    string data = 0;

    Node(string data) : data(data) {}
};

int main()
{
    Node* head = new Node("boss");
    head->left = new Node("wife");
    head->right = new Node("son");
    head->left->left = head;
    head->right->left = new Node("girlfriend");
    head->right->right = new Node("boyfriend");
    head->left->right = head->right;
    head->right->left->left = head->right;
    head->right->left->right = head->right->right;
    head->right->right->left = head->right->left;

    cout << "son love 1: " << head->right->left->data << ", " << "son love 2: " << head->right->right->data;
    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    char data = 0;

    Node(char data) : data(data) {}
};

int main()
{
    Node* head = new Node('A');
    head->left = new Node('B');
    head->right = new Node('C');
    head->left->left = new Node('D');
    head->left->right = new Node('E');

    string command;
    cin >> command;

    Node* node = nullptr;
    for (int i = 0; i < command.length(); ++i)
    {
        switch (command[i])
        {
            case 'H':
                node = head;
                break;

            case 'L':
                node = node->left;
                break;

            case 'R':
                node = node->right;
                break;
        }
    }

    cout << node->data;
    return 0;
}
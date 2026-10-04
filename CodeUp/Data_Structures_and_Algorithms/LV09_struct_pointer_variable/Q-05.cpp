#include <iostream>
using namespace std;

struct Node{
    int age;
    Node* next1;
    Node* next2;
};

Node* AddNode(int age, int nodeIdx = 0, Node* parentNode = nullptr){
    if (nodeIdx == 0){
        Node* node = new Node;
        node->age = age;
        node->next1 = nullptr;
        node->next2 = nullptr;

        return node;
    }
    else if(nodeIdx == 1){
        parentNode->next1 = new Node;
        parentNode->next1->age = age;
        parentNode->next1->next1 = nullptr;
        parentNode->next1->next2 = nullptr;

        return parentNode->next1;
    } else if (nodeIdx == 2)
    {
        parentNode->next2 = new Node;
        parentNode->next2->age = age;
        parentNode->next2->next1 = nullptr;
        parentNode->next2->next2 = nullptr;

        return parentNode->next2;
    }

    return nullptr;
}

void LinkNode(Node* parentNode, Node* targetNode, int nextIdx){
    if (nextIdx == 1){
        parentNode->next1 = targetNode;
    }
    else if (nextIdx == 2){
        parentNode->next2 = targetNode;
    }
}

int main()
{
    Node* simson = AddNode(20);
    Node* woman1 = AddNode(29, 1, simson);
    Node* woman2 = AddNode(30, 2, simson);
    Node* man1 = AddNode(25,1, woman1);
    Node* man2 = AddNode(40, 2, woman1);
    Node* man3 = AddNode(38, 2, woman2);

    LinkNode(woman2, woman1, 1);

    return 0;
}

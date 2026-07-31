#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

struct Node{
	Node* left = nullptr;
	Node* right = nullptr;
	char data;
};

void dfs(Node* node){
	if (node == nullptr) return;

	cout << node->data;

	dfs(node->left);
	dfs(node->right);
}

int main()
{
	Node* head = new Node();
	cin >> head->data;

	head->left = new Node();
	cin >> head->left->data;

	head->right = new Node();
	cin >> head->right->data;

	head->left->left = new Node();
	cin >> head->left->left->data;

	head->left->right = new Node();
	cin >> head->left->right->data;

	head->right->left = new Node();
	cin >> head->right->left->data;

	dfs(head);
	return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

struct Node{
	int value;
	Node* left;
	Node* right;
};

void dfs(Node* node){
	cout << node->value;

	if (node->left == nullptr && node->right == nullptr) return;

	dfs(node->left);
	dfs(node->right);
}

int main()
{
	Node* root = new Node{1, nullptr, nullptr};

	root->left = new Node{2, nullptr, nullptr};
	root->right = new Node{5, nullptr, nullptr};

	root->left->left = new Node{6, nullptr, nullptr};
	root->left->right = new Node{7, nullptr, nullptr};

	root->right->left = new Node{4, nullptr, nullptr};
	root->right->right = new Node{3, nullptr, nullptr};

	dfs(root);
	return 0;
}
#include <iostream>
#include <list>
using namespace std;

// Linked List 구현
struct Node {
	char ch;
	Node* next;
};

Node buf[100];
int bufCnt;
Node* head;
Node* tail;
Node* myAlloc(int ch, Node* next) {
	buf[bufCnt].ch = ch;
	buf[bufCnt].next = next;
	return &buf[bufCnt++];
}

void addNode(char ch) {
	Node* node = myAlloc(ch, nullptr);
	if (head == nullptr) {
		head = node;
	}
	else {
		tail->next = node;
	}
	tail = node;
}
int main()
{
	addNode('A');
	addNode('B');
	addNode('C');
	addNode('D');
	addNode('E');

	for (Node* node = head; node != nullptr; node = node->next) {
		cout << node->ch << " ";
	}
	return 0;
}
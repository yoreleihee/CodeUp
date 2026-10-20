#include <iostream>
#include <list>
using namespace std;

// 정방향 LinedList
struct Node {
	int value;
	Node* next = nullptr;
};
Node buff[100] = {};
int buffCnt = 0;
Node* head = nullptr;
Node* tail = nullptr;

Node* myAllocate(int value) {
	Node node{value, nullptr};
	buff[buffCnt] = node;

	return &buff[buffCnt++];
}
void addNode(int value) {
	Node* node = myAllocate(value);

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
	int n = 6;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		addNode(num);
	}

	for (Node* p = head; p != nullptr; p = p->next) {
		cout << p->value << " ";
	}
	return 0;
}
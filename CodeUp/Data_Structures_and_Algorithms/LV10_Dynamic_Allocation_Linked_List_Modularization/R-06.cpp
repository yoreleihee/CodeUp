#include <iostream>
#include <list>
using namespace std;

// 입력 받은 글자를 링크드리스트에 역순으로 저장하고, 맨 앞부터 두 칸 씩 건너뛰어 출력
struct Node {
	char ch;
	Node* next;
};

Node buf[100];
int bufCnt;
Node* head;
Node* myAlloc(int ch, Node* next) {
	buf[bufCnt].ch = ch;
	buf[bufCnt].next = next;
	return &buf[bufCnt++];
}

void addNode(char ch) {
	head = myAlloc(ch, head);
}
int main()
{
	for (int i = 0; i < 6; ++i) {
		char ch;
		cin >> ch;
		addNode(ch);
	}

	for (Node* node = head; node != nullptr;) {
		cout << node->ch << " ";

		if (node->next == nullptr) break;

		node = node->next->next;
	}
	return 0;
}
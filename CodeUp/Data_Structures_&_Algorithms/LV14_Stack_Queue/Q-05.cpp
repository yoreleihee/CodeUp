#include <iostream>
#include <vector>
#include <list>

using namespace std;

namespace my{
	template<typename T>
	class queue{
		struct Node{
			T value;
			Node* next = nullptr;
		};

	public:
		void enqueue(T value){
			Node* node = new Node();
			node->value = value;

			if (mHead == nullptr){
				mHead = node;
				mTail = node;
			} else{
				mTail->next = node;
				mTail = node;
			}
		}

		void dequeue(){
			if (mHead == nullptr) return;
			Node* p = mHead->next;
			delete mHead;
			mHead = p;
		}

		void print(){
			Node* p = mHead;
			while (p != nullptr){
				cout << p->value << " ";
				p = p->next;
			}
		}
	private:
		Node* mHead = nullptr;
		Node* mTail = nullptr;
	};
}
int main()
{
	my::queue<char> charQueue;

	int enqueueCount;
	int dequeueCount;
	cin >> enqueueCount >> dequeueCount;

	for (int i = 0; i < enqueueCount; ++i)
	{
		char c;
		cin >> c;
		charQueue.enqueue(c);
	}

	for (int i = 0; i < dequeueCount; ++i)
	{
		charQueue.dequeue();
	}

	charQueue.print();
	return 0;
}
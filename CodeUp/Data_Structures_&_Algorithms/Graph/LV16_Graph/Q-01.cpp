#include <iostream>
#include <vector>

using namespace std;

namespace my{
	template<typename T>
	class queue{
		struct Node{
			T data;
			Node* next = nullptr;
		};

	public:
		void push_back(T data){
			if (mSize >= 4){
				cout << "Error" << endl;
				exit(0);
			}
			Node* node = new Node();
			node->data = data;

			if (mHead == nullptr){
				mHead = node;
				mTail = node;
			} else{
				mTail->next = node;
				mTail = node;
			}

			mSize++;
		}

		void pop(){
			if (mHead == nullptr) {
				cout << "Error" << endl;
				exit(0);
			}

			Node* temp = mHead;
			mHead = mHead->next;

			if (mHead == nullptr){
				mTail = nullptr;
			}

			delete temp;
			mSize--;
		}

		void print(){
			Node* p = mHead;
			while (p != nullptr){
				cout << p->data << " ";
				p = p->next;
			}
		}
	private:
		Node* mHead = nullptr;
		Node* mTail = nullptr;
		int mSize = 0;
	};
}
int main()
{
	int num;
	cin >> num;

	my::queue<int> queue;
	for (int i = 0; i < num; ++i)
	{
		char command;
		int data;
		cin >> command >> data;

		if (command == 'E'){
			queue.push_back(data);
		} else if (command == 'D'){
			queue.pop();
		}
	}

	queue.print();
	return 0;
}
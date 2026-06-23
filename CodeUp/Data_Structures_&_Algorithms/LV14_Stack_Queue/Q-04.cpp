#include <iostream>
#include <vector>
#include <list>

using namespace std;

namespace my{
	template<typename T1, typename T2>
	class list{
		struct Node{
			T1 a;
			T2 b;
			Node* next = nullptr;
		};

	public:
		void push_back(T1 value1, T2 value2){
			Node* node = new Node();
			node->a = value1;
			node->b = value2;

			if (mHead == nullptr){
				mHead = node;
				mTail = node;
			} else{
				mTail->next = node;
				mTail = node;
			}
		}

		void printT1(){
			Node* p = mHead;
			while (p != nullptr){
				cout << p->a << " ";
				p = p->next;
			}
		}

		void printT2(){
			Node* p = mHead;
			while (p != nullptr){
				cout << p->b << " ";
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
	int n = 4;

	my::list<char, int> myList;

	for (int i = 0; i < n; ++i)
	{
		char charElem = 'A' + i;
		int intElem = 1 + i;

		myList.push_back(charElem, intElem);
	}

	myList.printT1();
	cout << endl;
	myList.printT2();

	return 0;
}
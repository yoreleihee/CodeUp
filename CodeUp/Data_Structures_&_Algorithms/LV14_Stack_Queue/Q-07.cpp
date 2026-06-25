#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Node{
	int x;
	char y;
};

namespace my{
	class queue{
	public:
		void enqueue(Node value){
			if (mTail >= 256){
				for (int i = mTop; i < mTail; ++i)
				{
					int idx = i - mTop;
					mArr[idx] = mArr[i];
				}

				mTail = mTail - mTop;
				mTop = 0;
			}

			mArr[mTail++] = value;
		}

		Node dequeue(){
			if (mTop < mTail){
				Node node = mArr[mTop];
				mTop++;

				return node;
			}

			return {};
		}
	private:
		Node mArr[256] = {};
		int mTop = 0;
		int mTail = 0;
	};
}
int main()
{
	my::queue myQueue;

	for (int i = 0; i < 3; ++i)
	{
		int num;
		char ch;
		cin >> num >> ch;

		Node node{};
		node.x = num;
		node.y = ch;
		myQueue.enqueue(node);
	}

	for (int i = 0; i < 3; ++i)
	{
		Node node = myQueue.dequeue();
		cout << node.x << " " << node.y << endl;
	}
	return 0;
}
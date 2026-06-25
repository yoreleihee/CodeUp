#include <iostream>
#include <vector>
#include <list>

using namespace std;

namespace my{
	class queue{
	public:
		void enqueue(int value){
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

		int dequeue(){
			if (mTop < mTail){
				int node = mArr[mTop];
				mTop++;

				return node;
			}

			return {};
		}
	private:
		int mArr[256] = {};
		int mTop = 0;
		int mTail = 0;
	};
}
int main()
{
	my::queue myQueue;

	int num;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		myQueue.enqueue(1);
		myQueue.enqueue(2);
		myQueue.enqueue(3);
		cout << myQueue.dequeue();
		cout << myQueue.dequeue();
		cout << myQueue.dequeue();
	}

	return 0;
}
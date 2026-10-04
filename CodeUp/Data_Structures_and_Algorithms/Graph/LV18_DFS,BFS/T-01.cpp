#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class SortedArray{
	int mSize;
	int *p;
	void sort(){
		for (int i = 0; i < mSize - 1; ++i)
		{
			int minIdx = i;
			for (int j = i + 1; j < mSize; ++j)
			{
				if (p[minIdx] > p[j]){
					minIdx = j;
				}
			}

			swap(p[minIdx], p[i]);
		}
	}

public:
	SortedArray(){
		p = nullptr;
		mSize = 0;
	};
	SortedArray(SortedArray& src){
		mSize = src.mSize;
		p = new int[mSize];

		for (int i = 0; i < mSize; ++i)
		{
			this->p[i] = src.p[i];
		}
	};
	SortedArray(int p[], int size){
		mSize = size;
		this->p = new int[mSize];
		for (int i = 0; i < mSize; ++i)
		{
			this->p[i] = p[i];
		}
	};
	~SortedArray(){
		delete[] p;
	};
	SortedArray operator+ (SortedArray& op2){
		int newSize = mSize + op2.mSize;
		int *newArr = new int[newSize];

		for (int i = 0; i < mSize; ++i)
		{
			newArr[i] = p[i];
		}

		for (int i = 0; i < op2.mSize; ++i)
		{
			newArr[i + mSize] = op2.p[i];
		}

		SortedArray result(newArr, newSize);
		result.sort();

		delete[] newArr;
		return result;
	}

	SortedArray& operator= (const SortedArray& op2){
		if (this == &op2) return *this;

		delete[] p;
		mSize = op2.mSize;
		p = new int[mSize];

		for (int i = 0; i < mSize; ++i)
		{
			this->p[i] = op2.p[i];
		}

		return *this;
	}
	void show(){
		for (int i = 0; i < mSize; ++i)
		{
			cout << p[i] << " ";
		}
	}
};
int main()
{
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7 , 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b;

	a.show();
	b.show();
	c.show();

	return 0;
}
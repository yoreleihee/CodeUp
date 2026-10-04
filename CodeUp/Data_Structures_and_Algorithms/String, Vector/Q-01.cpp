#include <iostream>
#include <vector>

using namespace std;

namespace my
{
	template<typename T>
	class Vector
	{
	public:
	public:
		Vector(size_t cap = DEFAULT_CAP)
				: mArr(new T[cap]), mSize(0), mCapacity(cap)
		{}

		Vector(const Vector &other)
				: mArr(new T[other.mCapacity]), mSize(other.mSize), mCapacity(other.mCapacity)
		{
			for (int i = 0; i < mSize; ++i)
			{
				mArr[i] = other.mArr[i];
			}
		}

		~Vector()
		{
			delete mArr;
		}

		Vector &operator=(const Vector &other)
		{
			if (this != &other)
			{
				if (mCapacity < other.mCapacity)
				{
					delete[] mArr;
					mCapacity = other.mCapacity;
					mArr = new T[mCapacity];
				}

				mSize = other.mSize;
				for (int i = 0; i < mSize; ++i)
				{
					mArr[i] = other.mArr[i];
				}
			}
			return *this;
		}

		T &operator[](size_t idx)
		{ return mArr[idx]; }

		const T &operator[](size_t idx) const
		{ return mArr[idx]; }

		T &front()
		{ return mArr[0]; }

		T &back()
		{ return mArr[mSize - 1]; }

		T *begin() const
		{ return mArr; }

		T *end() const
		{ return mArr + mSize; }

		void push_back(const T &value)
		{
			if (mSize >= mCapacity)
			{
				size_t newCap = mCapacity * 2;
				T *newArr = new T[newCap];

				for (int i = 0; i < mSize; ++i)
				{
					newArr[i] = mArr[i];
				}

				delete[] mArr;
				mArr = newArr;
				mCapacity = newCap;
			}

			mArr[mSize++] = value;
		}

		void pop_back(){
			if (mSize > 0) mSize--;
	}

	void resize(size_t n, T value = T()){
		if (n > mCapacity){
			T* newArr = new T[n];

			for (int i = 0; i < mSize; ++i)
			{
				newArr[i] = mArr[i];
			}

			delete mArr;
			mArr = newArr;
		}

		for (int i = mSize; i < n; ++i)
		{
			mArr[i] = value;
		}

		mSize = n;
	}

	void clear(){
		mSize = 0;
	}

	void shrink_to_fit(){
		mCapacity = mSize;
		T* newArr = new T[mCapacity];
		for (int i = 0; i < mSize; ++i)
		{
			newArr[i] = mArr[i];
		}

		delete[] mArr;
		mArr = newArr;
	}

	void insert(int idx, const T& value){
		if (mCapacity <= mSize){
			size_t newCap = mCapacity * 2;
			T* newArr = new T[newCap];
			for (size_t i = 0; i < mSize; ++i)
				newArr[i] = mArr[i];
			delete[] mArr;
			mArr = newArr;
			mCapacity = newCap;
		}

		for (int i = mSize; i >= idx; --i)
		{
			mArr[i] = mArr[i - 1];
		}

		mArr[idx] = value;
		mSize++;
	}

	void erase(size_t idx){
		if (idx >= mSize) return;

		for (int i = idx; i < mSize - 1; ++i)
		{
			mArr[i] = mArr[i + 1];
		}
		mSize--;
	}

	void reserve(size_t newCap){
		if (newCap <= mCapacity) return;

		T* newArr = new T[newCap];
		for (int i = 0; i < mSize; ++i)
		{
			newArr[i] = mArr[i];
		}

		delete[] mArr;
		mArr = newArr;
		mCapacity = newCap;
	}

	T& at(size_t idx){
		if (idx >= mSize) throw out_of_range("index out of range");

		return mArr[idx];
	}

	void swap(Vector& other){
		std::swap(mSize, other.mSize);
		std::swap(mCapacity, other.mCapacity);
		std::swap(mArr, other.mArr);
	}

	size_t capacity() const {return mCapacity;}
	size_t size() const {return mSize;}
	bool empty() const {return mSize == 0;}

	bool operator==(const Vector& other) const{
		if (mSize != other.mSize) return false;

		for (int i = 0; i < mSize; ++i)
		{
			if (mArr[i] != other.mArr[i])
				return false;
		}

		return true;
	}

	bool operator!=(const Vector& other) const{
		return !(*this == other);
	}

	private:
		static constexpr size_t DEFAULT_CAP = 32;
		size_t mSize;
		T *mArr;
		size_t mCapacity;
	};
}

int main()
{
	my::Vector<int> vec;

	std::cout << "=== 기본 동작 테스트 ===" << std::endl;
	std::cout << "초기 크기: " << vec.size() << std::endl;
	std::cout << "초기 용량: " << vec.capacity() << std::endl;

	for (int i = 1; i <= 5; i++)
		vec.push_back(i);

	std::cout << "\n5개 요소 추가 후:" << std::endl;
	std::cout << "크기: " << vec.size() << std::endl;
	std::cout << "용량: " << vec.capacity() << std::endl;

	vec.erase(2);

	std::cout << "반복자로 출력: ";
	for (int & it : vec)
	{
		cout << it << " ";
	}

	return 0;
}
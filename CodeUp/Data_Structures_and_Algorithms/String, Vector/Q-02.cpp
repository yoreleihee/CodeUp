#include <iostream>
#include <vector>

using namespace std;

namespace my
{
	class string{
	public:
		string(const char* str){
			mSize = strlen(str);
			mCapacity = (mSize * 2) + (mSize / 2);
			mStr = new char[mCapacity];
			memset(mStr, 0, mCapacity);
			memcpy(mStr, str, mSize + 1);
		}

		~string(){
			delete[] mStr;
			mStr = nullptr;
		}

		bool isEmpty() const{
			return mSize == 0;
		}

		void clear() {
			mSize = 0;
		}

		bool operator== (const char* str){
			if (mSize != strlen(str)) return false;

			for (int i = 0; i < mSize; ++i)
			{
				if (mStr[i] != str[i]) return false;
			}

			return true;
		}

		string(const string& other){
			mSize = other.mSize;
			mCapacity = other.mCapacity;

			mStr = new char[mCapacity];
			memset(mStr, 0, mCapacity);
			memcpy(mStr, other.mStr, mSize + 1);
		}

		void operator+= (const char* str){
			int len = strlen(str);
			int newSize = mSize + len;

			if (newSize >= mCapacity){
				mCapacity = (newSize *2) + (newSize / 2);
				char* newStr = new char[mCapacity];
				memset(newStr, 0, mCapacity);
				memcpy(newStr, mStr, mSize + 1);

				delete[] mStr;
				mStr = newStr;
			}

			memcpy(mStr + mSize, str, len + 1);
			mSize = newSize;
		}

		char& operator[] (int idx){
			return mStr[idx];
		}

		int Size() const {return mSize;}
		const char* c_str() const {return mStr;}


	private:
		char* mStr = nullptr;
		size_t mSize;
		size_t mCapacity;
	};

	int main()
	{
		my::string str("Hello");
		str += "World";
		return 0;
	}
}
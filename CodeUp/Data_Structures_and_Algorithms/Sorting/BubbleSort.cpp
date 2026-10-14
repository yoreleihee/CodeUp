#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 매번 끝까지 순회하며 최소 또는 최대 값을 맨 앞, 또는 맨 뒤로 민다
void mergeSort(vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		for (int j = 0; j < arr.size() - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	vector<int> arr = {5, 3, 8, 1, 2, 7};

	mergeSort(arr);

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}

	return 0;
}
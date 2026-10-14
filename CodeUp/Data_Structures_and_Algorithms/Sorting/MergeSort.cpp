#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void mergeSort(vector<int>& arr, int start, int end) {
	// start == end: 배열의 길이가 1임
	// 요소가 하나만 있는 상태는 정렬된 상태
	if (start == end) {
		return;
	}

	// 반으로 나눔
	int mid = (start + end) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);

	// 정렬
	int a = start;
	int b = mid + 1;
	int idx = 0;
	vector<int> result(arr.size());
	while (true) {
		if (a > mid && b > end) break;

		if (a > mid) { // b값만 남은 경우
			result[idx++] = arr[b++];
		}
		else if (b > end) { // a값만 남은 경우
			result[idx++] = arr[a++];
		}
		else if (arr[a] < arr[b]) {
			result[idx++] = arr[a++];
		}
		else {
			result[idx++] = arr[b++];
		}
	}
	for (int i = start; i <= end; ++i) {
		arr[i] = result[i - start];
	}
}

int main()
{
	vector<int> arr = {5, 3, 8, 1, 2, 7};

	mergeSort(arr, 0, arr.size() - 1);

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}

	return 0;
}
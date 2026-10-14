#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// pivot 중심으로 왼쪽에는 작은 값, 오른쪽에는 큰값을 둔다.
// pivot 양옆의 구간으로 나눈 구간에 위의로직을 반복한다.
void quickSort(vector<int>& arr, int start, int end) {
	if (start >= end) {
		return;
	}

	int pivot = arr[end];
	int i = start - 1;

	for (int j = start; j < end; ++j) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[end]);
	int p = i + 1;

	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}
int main()
{
	vector<int> arr = {5, 3, 8, 1, 2, 7};

	quickSort(arr, 0, arr.size() - 1);

	return 0;
}
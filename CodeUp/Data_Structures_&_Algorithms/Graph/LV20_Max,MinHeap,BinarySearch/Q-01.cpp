#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int arr[] = {4, 4, 5, 7, 8, 10, 20, 22, 23, 24};

void binarySearch(int target, int start, int end){
	if (start > end){
		cout << "X" << endl;
		return;
	}
	int mid = (start + end) / 2;

	if (arr[mid] == target){
		cout << "O" << endl;
		return;
	}

	if (target > arr[mid]){
		binarySearch(target, mid + 1, end);
	} else{
		binarySearch(target, start, mid - 1);
	}
}
int main()
{
	int target;
	cin >> target;

	binarySearch(target, 0, size(arr) - 1);

	return 0;
}
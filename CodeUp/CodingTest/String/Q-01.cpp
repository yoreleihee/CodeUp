#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char s[] = "HELLO";

	int left = 0;
	int right = strlen(s) - 1;

	while (left < right){
		swap(s[left], s[right]);

		left++;
		right--;
	}

	cout << s;

	return 0;
}
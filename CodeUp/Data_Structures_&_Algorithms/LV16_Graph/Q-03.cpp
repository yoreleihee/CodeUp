#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int changes[4] = {35, 17, 7, 1};

	int num = 170;

	int i = 0;
	int count = 0;
	while (i < 4){
		int change = changes[i];
		count = num / change;

		num %= change;

		cout << changes[i] << ":" << count << "개" << endl;
		i++;
	}
	return 0;
}
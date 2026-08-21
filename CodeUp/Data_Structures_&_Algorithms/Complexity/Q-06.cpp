#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	int p, n;
	cin >> p >> n;

	for (int i = 0; i < n; ++i)
	{
		int result = 0;
		p *= 2;

		while (p > 0){
			int temp = p % 10;
			result = result * 10 + temp;
			p /= 10;
		}
		p += result;
	}

	cout << p;
	return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int result = 0;

	queue<int> intQueue;
	intQueue.push(1);

	int n;
	cin >> n;

	int count = 0;
	while (count < n){
		int now = intQueue.front();
		intQueue.pop();

		result += now;

		intQueue.push(now * 3);

		count++;
	}

	while (!intQueue.empty()){
		int now = intQueue.front();
		intQueue.pop();

		result += now;
	}

	cout << result;
	return 0;
}
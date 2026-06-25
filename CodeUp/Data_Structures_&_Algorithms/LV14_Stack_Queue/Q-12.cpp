#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{
	char heros[] = "BIAH";

	queue<char> heroQueue;
	for (int i = 0; i < strlen(heros); ++i)
	{
		heroQueue.push(heros[i]);
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			auto hero = heroQueue.front();

			heroQueue.pop();
			heroQueue.push(hero);
		}

		cout << heroQueue.front() << " ";
		heroQueue.pop();
	}
	return 0;
}
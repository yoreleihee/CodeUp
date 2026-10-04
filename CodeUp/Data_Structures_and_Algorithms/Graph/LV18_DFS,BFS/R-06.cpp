#include <iostream>
#include <vector>
#include <queue>

using namespace std;

string value = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string password[10] = {};
int passwordCount = 0;
char path[5] = {};
int cnt = 0;
bool found[10] = {};

void recursive(int level){
	if (level == 4){
		cnt++;
		for (int i = 0; i < passwordCount; ++i)
		{
			if (path == password[i] && !found[i]){
				found[i] = true;

				cout << cnt << endl;
			}
		}

		return;
	}

	for (int i = 0; i < value.length(); ++i)
	{
		path[level] = value[i];
		recursive(level + 1);
		path[level] = 0;
	}
}
int main()
{
	cin >> passwordCount;
	for (int i = 0; i < passwordCount; ++i)
	{
		cin >> password[i];
	}

	recursive(0);

	return 0;
}
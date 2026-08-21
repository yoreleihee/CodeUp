#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	string str;
	cin >> str;

	bool isEmpty = false;
	cout << str << endl;
	while (!isEmpty){
		isEmpty = true;
		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] != '_'){
				isEmpty = false;
			} else{
				continue;
			}

			str[i]--;
			if (str[i] < 'A'){
				str[i] = '_';
			}
		}

		cout << str << endl;
	}

	return 0;
}
#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

bool isAllLower(string str){
	for (char c : str){
		if (!islower(c)) return false;
	}

	return true;
}
int main()
{
	int num;
	cin >> num;

	vector<string> ids;
	for (int i = 0; i < num; ++i)
	{
		string str;
		cin >> str;

		bool isPascalCase = isupper(str[0]) && isAllLower(str.substr(1));
		if (isAllLower(str)){
			str[0] = toupper(str[0]);
		}
		else if (!isPascalCase){
			transform(str.begin(), str.end(), str.begin(), ::toupper);
		}

		ids.push_back(str);
	}

	sort(ids.begin(), ids.end(), [](string a, string b){
		string aLower = a;
		string bLower = b;
		transform(a.begin(), a.end(), aLower.begin(), ::toupper);
		transform(b.begin(), b.end(), bLower.begin(), ::toupper);

		return aLower < bLower;
	});

	for (int i = 0; i < ids.size(); ++i)
	{
		cout << ids[i] << endl;
	}
	return 0;
}
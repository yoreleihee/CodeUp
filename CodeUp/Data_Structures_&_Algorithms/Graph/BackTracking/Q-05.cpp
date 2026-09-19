#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;



int main()
{
	// 각 문장에서 조합찾기

	unordered_map<string, int> dict;

	string str[2];
	for (int i = 0; i < 2; ++i)
	{
		cin >> str[i];
	}

	for (int i = 0; i < size(str); ++i)
	{
		unordered_map<string, int> local;
		for (int j = 0; j < str[i].length() - 1; ++j)
		{
			// 문장의 뒷자리를 포함해 조합을 만듬
			string key;
			key += str[i][j];
			key += str[i][j + 1];

			// 한 문장에서 이전에 나왔던 조합은 건너뛰어야함
			if (local[key] >= 1) continue;

			// 각 조합을 hash에 넣음
			local[key] += 1;
		}

		for (auto p : local){
			dict[p.first] += 1;
		}
	}

	int crossCnt = 0;
	int totalCnt = 0;
	for (auto p : dict){
		// hash에 count가 2이상인것이 교집합
		if (p.second >= 2){
			crossCnt++;
		}
		// hash에 count가 1이상인것이 합집합
		if (p.second >= 1){
			totalCnt++;
		}
	}

	int result = crossCnt * 100 / totalCnt;

	cout << result;
	return 0;
}
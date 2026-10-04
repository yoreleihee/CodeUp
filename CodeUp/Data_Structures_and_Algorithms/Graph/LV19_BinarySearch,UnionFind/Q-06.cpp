#include <iostream>
using namespace std;

char grade[256] = {};
int parent[256] = {};

void init(){
	for (int i = 0; i < 256; ++i) parent[i] = i;
}

int find(int x){
	if (parent[x] == x) return x;
	return parent[x] = find(parent[x]);
}

void unite(int a, int b){
	int rootA = find(a);
	int rootB = find(b);
	if (rootA != rootB){
		parent[rootB] = rootA;
		if (grade[rootB] != 0) grade[rootA] = grade[rootB];
	}
}

void setGrade(int a, char ch){
	grade[find(a)] = ch;
}

bool isNumber(string s){
	for (char c : s) {
		if (!isdigit(c)) return false;
	}
	return true;
}

int main()
{
	init();
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		string str1, str2;
		cin >> str1 >> str2;

		if (isNumber(str1) && isNumber(str2)){
			unite(stoi(str1), stoi(str2));
		}
		else if (isNumber(str1)){
			setGrade(stoi(str1), str2[0]);
		}
		else{
			setGrade(stoi(str2), str1[0]);
		}
	}

	for (int i = 1; i <= k; ++i)
	{
		cout << grade[find(i)];
	}

	return 0;
}
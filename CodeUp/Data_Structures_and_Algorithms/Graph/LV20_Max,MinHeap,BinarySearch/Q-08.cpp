#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

struct Node{
	int y;
	int x;
	int value;

	bool operator<(const Node& other) const{
		return value < other.value;
	}
};
int main()
{

	int n;
	cin >> n;

	priority_queue<Node, vector<Node>, less<Node>> pq;

	for (int i = 0; i < n; ++i)
	{
		vector<int> temp;

		for (int j = 0; j < n; ++j)
		{

			Node node{i , j};
			cin >> node.value;

			if (node.value > 0)
				pq.push(node);
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		Node node = pq.top();
		pq.pop();

		cout << (char)('A' + node.y) << "-" << (char)('A' + node.x) << " " << node.value << endl;
	}


	return 0;
}
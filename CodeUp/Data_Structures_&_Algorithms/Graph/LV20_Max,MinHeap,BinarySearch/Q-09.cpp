#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Item{
	bool isGold = false;
	int weight = 0;

	bool operator>(const Item& other) const{
		if (weight != other.weight){
			return weight < other.weight;
		}
		return isGold > other.isGold;
	}
};

int main()
{
	int goldCnt;
	cin >> goldCnt;

	priority_queue<Item, vector<Item>, greater<Item>> pq;

	for (int i = 0; i < goldCnt; ++i)
	{
		Item item;
		cin >> item.weight;
		item.isGold = true;
		pq.push(item);
	}

	int result = 0;

	while (true){
		Item last;
		bool stop = false;

		for (int i = 0; i < 2; ++i)
		{
			if (pq.empty()) {
				stop = true;
				break;
			}
			Item item = pq.top();
			if (!item.isGold){
				stop = true;
				break;
			}
			pq.pop();
			result++;
			last = item;
		}

		if (stop) break;

		Item stone{false, last.weight * 2};
		pq.push(stone);
	}

	cout << result;
	return 0;
}
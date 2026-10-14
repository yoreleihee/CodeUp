#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 3, 4, 5 동전 조합으로 15원을 만드는 조합의 수 구하기
int main()
{
	int coins[] = {3, 4, 5};
	int dp[16] = {};
	int amount = 15;

	dp[0] = 1; // 0원을 만드는 경우의 수는 1 (동전을 선택하지 않음)

	for (int coin : coins) {
		for (int i = coin; i <= amount; ++i) {
			dp[i] += dp[i - coin];
		}
	}

	cout << dp[amount];
	return 0;
}
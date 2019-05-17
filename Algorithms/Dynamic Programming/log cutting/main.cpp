#include <bits/stdc++.h>

using namespace std;

int solve(int logSize, int *length, int *value)
{
	int dp[logSize + 1];
	dp[0] = 0;

	for (int i = 1; i <= logSize; i++)
	{
		int max_val = INT_MIN;
		for (int j = 0; j < i; j++)
			max_val = max(max_val, value[j] + dp[i - j - 1]);
		dp[i] = max_val;
	}
	return dp[logSize] ;
}

int main()
{
	int logSize = 5;
	int length[] = {1, 2, 3, 4, 5};
	int value[] = {2, 3, 8, 10, 2};

	cout << solve(logSize, length, value);
}
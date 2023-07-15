#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> cost, int n)
{
    vector<int> dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2 ; i < n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}
int main()
{
    vector<int> cost;
    cost.push_back(10);
    cost.push_back(15);
    cost.push_back(20);
    int n = cost.size();
    cout << solve(cost, n);
}
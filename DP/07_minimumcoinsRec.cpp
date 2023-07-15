#include <bits/stdc++.h>
using namespace std;
int solverec(vector<int> num, int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solverec(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}
int solvemem(vector<int> num, int x, vector<int> dp)
{
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return INT_MAX;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int mini = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        int ans = solverec(num, x - num[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    dp[x] = mini;
    return mini;
}
int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    int x;
    cin >> x;
    vector<int> dp(x + 1, -1);
    // int ans = solverec(num, x);
    int ans = solvemem(num, x, dp);
    if (ans == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}
#include <bits/stdc++.h>
using namespace std;
int solvetab(vector<int> &num, int x)
{
    vector<int> dp(x + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < num.size(); j++)
        {
            if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
            {

                dp[i] = min(dp[i], 1+dp[i - num[j]]);
            }
        }
    }
    if (dp[x] == INT_MAX)
    {
        return -1;
    }
    return dp[x];
}
int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    int x;
    cin >> x;
    int ans = solvetab(num, x);
    cout << ans;
}
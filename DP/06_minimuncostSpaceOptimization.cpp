#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> cost;
    cost.push_back(10);
    cost.push_back(15);
    cost.push_back(20);
    int n = cost.size();
    int prev2 = cost[0];
    int prev1 = cost[1];
    for (int i = 2; i < n; i++)
    {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    cout << min(prev1, prev2);
}
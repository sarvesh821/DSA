#include <bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> node;
vector<int> mergeksortedarray(vector<vector<int>> arr)
{
    vector<int> res;
    priority_queue<node, vector<node>, greater<int>> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push({arr[i][0], {i, 0}});
    }
    while (!pq.empty())
    {
        node curr = pq.top();
        pq.pop();
        int element = curr.first;
        int x = curr.second.first;
        int y = curr.second.second;
        res.push_back(element);
        if (y + 1 < arr[x].size())
        {
            pq.push({arr[x][y + 1], {x, y + 1}});
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> arr{{2, 6, 12, 15}, {1, 3, 14, 20}, {3, 5, 8, 10}};
    vector<int> output = mergeksortedarray(arr);
    for (auto x : output)
    {
        cout << x << " ";
    }
    return 0;
}
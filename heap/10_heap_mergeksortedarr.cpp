#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, pair<int, int>> node;
vector<int> mergesort(vector<vector<int>> arr)
{
    priority_queue<node, vector<node>, greater<node>> pq;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push({arr[i][0], {i, 0}});
    }
    while (!pq.empty())
    {
        node current = pq.top();
        pq.pop();
        int element = current.first;
        int x = current.second.first;
        int y = current.second.second;
        result.push_back(element);
        if (y + 1 < arr[x].size())
        {
            pq.push({arr[x][y + 1], {x, y + 1}});
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> arr{{2, 6, 12, 15},
                            {1, 9, 14, 20},
                            {3, 5, 8, 10}};
    vector<int>ans=mergesort(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
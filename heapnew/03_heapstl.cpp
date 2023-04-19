#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq;max periority
    // to reverse the order(min priority)
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        pq.push(no);
    }
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
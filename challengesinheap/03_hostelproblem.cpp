#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int, vector<int>, greater<int>> pq1;
    int q;
    cin >> q;
    int k;
    cin >> k;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
             int x, y;
            cin >> x >> y;
             int a = (x - 0) * (x - 0);
             int b = (y - 0) * (y - 0);
            int dis = a + b;
            pq.push(dis);
        }
        else
        {
            for (int i = 0; i < k - 1; i++)
            {
                int x = pq.top();
                pq1.push(x);
                pq.pop();
            }
            cout << pq.top() << endl;

            while (!pq1.empty())
            {
                pq.push(pq1.top());
                pq1.pop();
            }
        }
    }
    return 0;
}
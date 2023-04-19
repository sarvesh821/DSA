#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> leftheap; // maxheap
        priority_queue<int, vector<int>, greater<int>> rightheap;
        int n;
        cin >> n;
        int i = 1;
        int d;
        cin >> d;
        leftheap.push(d);
        int mid = d;
        cout << mid << " ";
        cin >> d;
        while (i <= n - 1)
        {

            if (leftheap.size() > rightheap.size())
            {
                if (d < mid)
                {
                    rightheap.push(leftheap.top());
                    leftheap.pop();
                    leftheap.push(d);
                }
                else
                {
                    rightheap.push(d);
                }
                mid = (leftheap.top() + rightheap.top()) / 2;
            }
            else if (leftheap.size() == rightheap.size())
            {
                if (d < mid)
                {
                    leftheap.push(d);
                    mid = leftheap.top();
                }
                else
                {
                    rightheap.push(d);
                    mid = rightheap.top();
                }
            }
            else
            {
                if (d > mid)
                {
                    leftheap.push(rightheap.top());
                    rightheap.pop();
                    rightheap.push(d);
                }
                else
                {
                    leftheap.push(d);
                }
                mid = (leftheap.top() + rightheap.top()) / 2;
            }
            cout << mid << " ";
            cin >> d;
            i++;
        }
    }
    return 0;
}
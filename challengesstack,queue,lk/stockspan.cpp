#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<pair<int, int>> s;
    int n;
    cin >> n;
    int arr[1000];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (s.empty())
        {
            s.push(make_pair(i, m));
            arr[j++] = i + 1;
        }
        else
        {
            if (s.top().second > m)
            {
                arr[j++] = i - s.top().first;
                s.push(make_pair(i, m));
            }
            else
            {
                while (!s.empty() && s.top().second < m)
                {
                    s.pop();
                }
                if (s.empty())
                {
                    arr[j++] = i + 1;
                }
                else
                {
                    arr[j++] = i - s.top().first;
                }
                s.push(make_pair(i, m));
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "End";

    return 0;
}
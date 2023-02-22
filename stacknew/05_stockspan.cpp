#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<pair<int, int>> s;
    int j = 0;
    int n;
    cin >> n;
    // int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        if (s.empty())
        {
            s.push(make_pair(i, no));
            arr2[j++] = i + 1;
        }
        else
        {
            // pair<int, int> f = s.top();
            if (s.top().second >= no)
            {
                arr2[j++] = i - s.top().first;
                s.push(make_pair(i, no));
            }
            else
            {
                while (!s.empty() && s.top().second <= no)
                {
                    // if (s.empty())
                    // {
                    //     break;
                    // }
                    s.pop();
                }
                if (s.empty())
                {
                    arr2[j++] = i + 1;
                }
                else
                {
                    arr2[j++] = i - s.top().first;
                }

                s.push(make_pair(i, no));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
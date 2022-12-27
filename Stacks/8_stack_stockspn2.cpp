#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    int price[n]{0};
    // int span[1000]{0};
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
        while (!s.empty() && price[s.top()] <= price[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            int ans = s.top();

            cout << i - ans << " ";
        }
        else
        {
            cout << i + 1 << " ";
        }
        s.push(i);
    }

    return 0;
}
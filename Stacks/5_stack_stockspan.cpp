#include <iostream>

#include <stack>
using namespace std;
void stackspan(int prices[], int n, int span[])
{
    stack<int> s;
    s.push(0);
    span[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int currentprice = prices[i];
        while (!s.empty() && prices[s.top()] <= currentprice)
        {
            s.pop();
        }
        if (!s.empty())
        {
            int ans = s.top();
            span[i] = i - ans;
        }
        else
        {
            span[i] = i + 1;
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << span[i] << " ";
    }
}
int main()
{
    int prices[100] = {100, 80, 60, 70, 60, 75, 85};
    int span[100];
    int n = 7;
    stackspan(prices, n, span);
    return 0;
}


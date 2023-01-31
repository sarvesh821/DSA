#include <bits/stdc++.h>
using namespace std;
float findsqrt(int n)
{

    int s = 0;
    int e = n;
    float ans = 0;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }

    float inc = 0.1;
    for (int i = 1; i <= 3; i++)
    {
        while (ans * ans <= n)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << findsqrt(n);
    return 0;
}
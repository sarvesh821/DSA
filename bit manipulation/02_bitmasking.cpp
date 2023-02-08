#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find even or oddd
    //  int n;
    //  cin >> n;
    //  if (n & 1 == 1)
    //  {
    //      cout << "odd no" << endl;
    //  }
    //  else
    //  {
    //      cout << "even no" << endl;
    //  }

    // check bit at ith position
    //  int n;
    //  cin >> n;
    //  int i;
    //  cin >> i;
    //  int d = 1 << i;
    //  int ans = n & d;
    //  if (ans > 0)
    //  {
    //      cout << "bit at ith position is 1" << endl;
    //  }
    //  else
    //  {
    //      cout << "bit at ith position is 0" << endl;
    //  }

    // set bit at ith position
    // int n;
    // cin >> n;
    // int i;
    // cin >> i;
    // int ans = n | (1 << i);
    // cout << ans << endl;

    // delete a bit from ith position
    // int n;
    // int i;
    // cin >> n;
    // cin >> i;
    // int d = ~(1 << i);
    // int ans = n & d;

    // cout << ans << endl;

    // set v bit at ith position
    // int n, i, v;
    // cin >> n >> v >> i;
    // int d = ~(1 << i);
    // int ans = n & d;

    // int fans = ans | (v << i);
    // cout << fans << endl;

    // clear last i bits;
    // int n;
    // cin >> n;
    // int i;
    // cin >> i;
    // int d = (-1 << i);
    // int ans = n & d;
    // cout << ans << endl;

    // clear bits from ith to jth position
    // int n, i, j;
    // cin >> n >> i >> j;
    // int a = -1 << (j + 1);
    // int b = (1 << i) - 1;
    // int mask = a | b;
    // int ans = n & mask;
    // cout << ans << endl;

    int n, m, i, j;
    cin >> n >> m >> i >> j;
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    int ans = n & mask;
    int mask2 = m << i;
    int finalans = ans | mask2;
    cout << finalans << endl;

    return 0;
}
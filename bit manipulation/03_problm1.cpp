// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m, i, j;
//     cin >> n >> m >> i >> j;
//     int a = -1 << (j + 1);
//     int b = (1 << i) - 1;
//     int mask = a | b;
//     int ans = n & mask;
//     int mask2 = m << i;
//     int finalans = ans | mask2;
//     cout << finalans << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cin >> n;
// int ans = 0;
// while (n > 0)
// {
//     int bit = n & 1;
//     ans += bit;
//     n = n >> 1;
// }
// cout << ans << endl;
// method 2
// int ans=0;
// while(n>0){
//     n=n&(n-1);
//     ans++;
// }
// cout<<ans<<endl;
// cout<<__builtin_popcount(n);
// return 0;
//}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int p = 1;
//     int ans = 0;
//     while (n > 0)
//     {
//         int lastbit = n & 1;
//         ans += p * lastbit;
//         p = p * 10;
//         n = n >> 1;
//     }
//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    int j = 0;
    while (ans > 0)
    {
        int lastbit = ans & 1;
        j++;

        if (lastbit == 1)
        {
            break;
        }
        ans = ans >> 1;
    }
    vector<int> v;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int y = arr[i];
        int we = y >> (j - 1);
        if (we & 1 == 1)
        {
            v.push_back(arr[i]);
        }
    }

    int ans2 = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans2 = ans2 ^ v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans2)
        {
            v2.push_back(arr[i]);
        }
    }
    int ans3 = v2[0];
    for (int i = 1; i < v2.size(); i++)
    {
        ans3 = ans3 ^ v2[i];
    }
    cout << ans3 << " " << ans2 << endl;

    return 0;
}
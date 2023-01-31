// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int likes[n];
//         int comments[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> likes[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> comments[i];
//         }
//         int m = *max_element(likes, likes + n);
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (likes[i] == m)
//             {
//                 cnt++;
//             }
//         }
//         if (cnt == 1)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (likes[i] == m)
//                 {
//                     cout << i + 1 << endl;
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             int no = *max_element(comments, comments + n);
//             for (int i = 0; i < n; i++)
//             {
//                 if (comments[i] == no)
//                 {
//                     cout << i + 1 << endl;
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//            cin>>arr[i];
//         }

//     }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         pair<int, int> p;
//         vector<pair<int, int>> v;
//         int max = 0;
//         int n;
//         cin >> n;
//         if(n==1){
//             cout<<1<<endl;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int ele;
//             cin >> ele;
//             v.push_back({ele, 0});
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int ele;
//             cin >> ele;
//             v[i].second = ele;
//         }
//         for (int i = 1; i < n; i++)
//         {
//             if (v[i].first > v[max].first)
//             {
//                 max = i;
//             }
//             else if (v[i].first == v[max].first)
//             {
//                 if (v[i].second > v[max].second)
//                 {
//                     max = i;
//                 }
//             }
//         }
//         cout << max + 1 << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int lcm = max(a, x);
        int gcd = min(b, x);

        while (gcd >= 1)
        {
            if (b % gcd == 0 && x % gcd == 0)
            {
                break;
            }
            else
            {
                gcd--;
            }
        }
        cout << gcd << endl;
        cout << lcm - gcd << endl;
    }
    return 0;
}s
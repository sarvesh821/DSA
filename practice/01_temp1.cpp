// #include<iostream>
// using namespace std;
// int find(int arr[],int n,int key){
//     int idx=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             idx=i;
//             break;
//         }
//     }
//     return idx;
// }
// int main()
// {
//     int arr[]={13,12,45,6,9,3,48};
//       int n=7;
//       int key;
//       cin>>key;
//       cout<<find(arr,n,key)<<endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int q, r;
//     cin >> q >> r;
//     int total = q * r;
//     float dis = (10.0 / 100.0) * total;
//     cout << dis << endl;
//     int p = total - dis;
//     cout << p << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int arr1[1000] = {0};
    // int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        arr1[arr[i] - 1]++;
    }
    int s = sizeof(arr1) / sizeof(int);
    for (int i = 0; i < s; i++)
    {
        if (arr1[i] != 0)
        {
            cout << i + 1 << "->" << arr1[i] << endl;
            ;
        }
    }
    return 0;
}
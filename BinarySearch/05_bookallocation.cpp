// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int books;
//     cin >> books;
//     int students;
//     cin >> students;
//     int pages[books];
//     for (int i = 0; i < books; i++)
//     {
//         cin >> pages[i];
//     }
//     int s = pages[books - 1];
//     int sum = 0;
//     for (int i = 0; i < books; i++)
//     {
//         sum = sum + pages[i];
//     }
//     int e = sum;

//     int ans = 0;
//     int currentsum = 0;
//     int z = 0;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         for (int i = 0; i < books; i++)
//         {
//             if (currentsum + pages[i] <= mid)
//             {
//                 currentsum += pages[i];
//             }
//             else
//             {
//                 z++;
//                 currentsum = pages[i];
//             }
//         }

//         if (z == students)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     cout << ans;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool ispossible(int arr[],int n,int m,int mid){
//     int st=1;
//     int pa=0;
//     for(int i=0;i<n;i++){

//     }
// }
// int findminpages(int arr[],int n,int m){
//     int sum=0;
//     if(n<m){
//         return -1;
//     }
//    int s=arr[n-1];
//    for(int i=0;i<n;i++){
//        sum+=arr[i];
//    }
//   int  e=sum;
//    while(s<=e){
//    int mid=(s+e)/2;
//      if(ispossible(arr,n,m,mid)){
//         int ans=min(ans,mid);
//         e=mid-1;
//      }
//      else{
//         s=mid+1;
//      }
//    }

// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int m;
//         cin>>m;
//         int arr[100];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         cout<<findminpages(arr,n,m);
//     }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
bool possible(int arr[], int n, int m, int min)
{
    int s = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count + arr[i] > min)
        {
            s++;
            count = arr[i];
            if (s > m)
            {
                return false;
            }
        }
        else
        {
            count += arr[i];
        }
    }
    return true;
}
int main()
{
    int n, m, mid;
    cin >> n >> m;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n < m)
    {
        cout << "-1" << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = arr[n - 1];
    int e = sum;
    int ans = INT_MAX;
    while (s <= e)
    {
        mid = (s + e) / 2;

        if (possible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}
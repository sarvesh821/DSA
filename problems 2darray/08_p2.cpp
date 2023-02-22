// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (i == j || j == n - i - 1)
//             {
//                 cout << arr[i][j];
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m - i; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // for(int i=0;i<n;i++){
//     //     int k=0;
//     //     int l=m;
//     //     while(k<m){
//     //         swap(arr[i][k],arr[i][l]);
//     //         k++;
//     //         l--;
//     //     }

//     // }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
   
    for (int i = 0; i < n; i++)
    {
        int k = i;
        int l = 0;
        while (l <= i)
        {
            cout << arr[k][l] << " ";
            l++;
            k--;
        }
        cout << endl;
    }
    for (int i = 1; i < m; i++)
    {
        int c = i;
        int z = n - 1;
        while (c <= n - 1)
        {
            cout << arr[z][c] << " ";
            z--;
            c++;
        }
        cout << endl;
    }
    return 0;
}
 // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (i < j)
    //         {
    //             swap(arr[i][j], arr[j][i]);
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for (int j = 0; j < m; j++)
    // {
    //     if (j % 2 == 0)
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int i = n - 1; i >= 0; i--)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    // }
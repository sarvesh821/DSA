// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int s = fact(n - 1);
//     int ans = n * s;
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int fibbo(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     int f1 = fibbo(n - 1);
//     int f2 = fibbo(n - 2);
//     return f1 + f2;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibbo(n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 1);
//     cout << n << " ";
//     // cout << n << " ";
//     // print(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// bool issorted(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     if (arr[0] < arr[1] and issorted(arr + 1, n - 1))
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << issorted(arr, n);
//     return 0;
// }
// #include <bits/stdc++.h>
// bool binarysearch(int arr[], int s, int e, int key)
// {

//     if (s > e)
//     {
//         return false;
//     }

//     int mid = (s + e) / 2;
//     if (arr[mid] == key)
//     {
//         return true;
//     }
//     else if (arr[mid] < key)
//     {
//         return binarysearch(arr, mid + 1, e, key);
//     }
//     else
//     {
//         return binarysearch(arr, s, mid - 1, key);
//     }

//     return false;
// }

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     cout << binarysearch(arr, 0, n - 1, key);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int pow(int a, int n)
// {
//     if (n == 1)
//     {
//         return a;
//     }

//     // int ans = pow(a, n - 1);
//     return a * pow(a, n - 1);
// }
// int main()
// {
//     int a, n;
//     cin >> a >> n;
//     cout << pow(a, n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int mltiply(int a, int n)
// {
//     if (n == 1)
//     {
//         return a;
//     }

//     // int ans = pow(a, n - 1);
//     return a + mltiply(a, n - 1);
// }
// int main()
// {
//     int a, n;
//     cin >> a >> n;
//     cout << mltiply(a, n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int findllastindex(int arr[], int n, int key)
// {
//     if (n == 0)
//     {
//         return -1;
//     }
//     int i = findllastindex(arr + 1, n - 1, key);
//     if (i == -1)
//     {
//         if (arr[0] == key)
//         {
//             return 0;
//         }
//         else
//         {
//             return -1;
//         }
//     }
//     return i + 1;
// }
// void allocc(int arr[], int i, int n, int key)
// {
//     if (i == n)
//     {
//         return;
//     }
//     if (arr[i] == key)
//     {
//         cout << i << " ";
//     }
//     allocc(arr, i + 1, n, key);
// }
// int storeind(int arr[], int i, int n, int arr1[], int j, int key)
// {
//     if (i == n)
//     {
//         return j;
//     }
//     if (arr[i] == key)
//     {
//         arr[j] = i;
//         return storeind(arr, i + 1, n, arr1, j + 1, key);
//     }
//     return storeind(arr, i + 1, n, arr1, j, key);
// }
// int findindex(int arr[], int n, int key)
// {
//     if (n == 0)
//     {
//         return -1;
//     }
//     if (arr[0] == key)
//     {
//         return 0;
//     }
//     int i = findindex(arr + 1, n - 1, key);
//     if (i == -1)
//     {
//         return -1;
//     }
//     return i + 1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int arr1[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     // cout << findllastindex(arr, n, key);
//     // storeind(arr, 0, n, arr1, 0, key);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int fastpow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int sum = fastpow(a, n / 2);
    sum *= sum;
    if (n & 2 != 0)
    {
        return a * sum;
    }
    return sum;
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << fastpow(a, n);
    return 0;
}
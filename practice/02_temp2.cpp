// #include <iostream>
// #include <climits>
// using namespace std;
// pair<int, int> largesmall(int arr[], int n)
// {
//     pair<int, int> p;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }
//     p.first = largest;
//     p.second = smallest;
//     return p;
// }
// int main()
// {

//     int arr[] = {12, 34, 45, 78, 2, 5, 8};
//     int n = 7;
//     pair<int, int> ans = largesmall(arr, n);
//     cout << ans.first << ":" << ans.second << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// bool compare(string a, string b)
// {
//     if (a == b)
//     {
//         return a.length() > b.length();
//     }
//     return a < b;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string *arr = new string[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n, compare);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarysearch(arr, n, key);
    return 0;
}
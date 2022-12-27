// linear search
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             index = i;
//         }
//     }
//     cout << index << endl;
// }

// binary search
#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = (e + s) / 2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarysearch(arr, n, key) << endl;
}
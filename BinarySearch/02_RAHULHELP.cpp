#include <bits/stdc++.h>
using namespace std;
int findele(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[s] <= arr[mid])
        {
            if (arr[s] <= key && key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && key <= arr[e])
            {
                s = mid + 1;
            }
            else
            {

                e = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << findele(arr, n, key);
    return 0;
}
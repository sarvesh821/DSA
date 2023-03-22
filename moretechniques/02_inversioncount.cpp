#include <bits/stdc++.h>
using namespace std;
int inversion(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[1000];
    int count = 0;
    // cout << "hello";
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count += mid - i + 1;
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
    return count;
}
int inversioncount(int arr[], int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int x = inversioncount(arr, s, mid);

    int y = inversioncount(arr, mid + 1, e);
    int z = inversion(arr, s, e);
    return x + y + z;
}
int main()
{
    // int n;
    // cin >> n;
    int arr[] = {1, 5, 2, 6, 3, 0};
    // int n = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << inversioncount(arr, 0, 5) << endl;
    return 0;
}
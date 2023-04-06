#include <bits/stdc++.h>
using namespace std;
// void bubblesort(int arr[], int j, int n)
// {
//     if (n == 1)
//     {
//         return;
//     }
//     if (j == n - 1)
//     {
//         return bubblesort(arr, 0, n - 1);
//     }
//     if (arr[j] > arr[j + 1])
//     {
//         swap(arr[j], arr[j + 1]);
//     }
//     bubblesort(arr, j + 1, n);
//     return;
// }
void rssort(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }
    swap(arr[i], arr[min]);
    rssort(arr, i + 1, n);
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
    // bubblesort(arr, 0, n);
    rssort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
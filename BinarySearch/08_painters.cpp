#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int m, int min)
{
    int count = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        if (count + arr[i] > min)
        {
            painters++;
            count = arr[i];
            if (painters > m)
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
    int m, n;
    cin >> m >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = arr[n - 1];
    int e = sum;
    int mid;
    int ans = INT_MAX;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (ispossible(arr, n, m, mid))
        {
            // ans = min(ans, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << mid << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int maxconsecutivesubarraylength(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int max1 = INT_MIN;
    int min1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, arr[i]);
        min1 = min(min1, arr[i]);
    }
    int length = 0;
    int count = 0;
    for (int i = min1; i <= max1; i++)
    {
        if (mp.find(i) != mp.end())
        {
            if (mp[i] > 0)
            {
                count++;
            }
        }
        else
        {
            length = max(length, count);
            count = 0;
        }
    }
    return length;
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
    cout << maxconsecutivesubarraylength(arr, n);
    return 0;
}
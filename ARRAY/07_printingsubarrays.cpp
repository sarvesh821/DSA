#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = -1;
    int right = -1;

    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                // cout << arr[k] << " ";
                sum = sum + arr[k];
            }
            if (sum > maximum)
            {
                maximum = sum;
                left = i;
                right = j;
            }
        }
    }
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " ";
    }
    cout << maximum << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cumarr[1000];
    cin >> arr[0];
    cumarr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        cumarr[i] = cumarr[i - 1] + arr[i];
    }
    int left = -1;
    int right = -1;
    int currsum = 0;
    // cout << cumarr[-1];
    int maximum = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            currsum = cumarr[j] - cumarr[i - 1];

            if (currsum > maximum)
            {
                maximum = currsum;
                left = i;
                right = j;
            }
        }
    }
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << maximum << endl;
    return 0;
}
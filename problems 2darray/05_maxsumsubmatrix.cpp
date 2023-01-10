#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (j == 0)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[i][j + 1];
            }
        }
    }
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == 0)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[i + 1][j];
            }
        }
    }

    int maxsum = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > maxsum)
            {
                maxsum = arr[i][j];
            }
        }
    }
    cout << "max sum is " << maxsum << endl;
    int li, lj;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == maxsum)
            {
                li = i;
                lj = j;
            }
        }
    }
    for (int i = li; i <= m - 1; i++)
    {
        for (int j = lj; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
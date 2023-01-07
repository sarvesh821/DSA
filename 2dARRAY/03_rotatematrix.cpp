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

    for (int row = 0; row < m; row++)
    {
        int startcol = 0;
        int endcol = n - 1;
        while (startcol < endcol)
        {
            swap(arr[startcol][row], arr[endcol][row]);
            startcol++;
            endcol--;
        }
    }
    // using stl reverse the row
    // for (int i = 0; i < m; i++)
    // {
    //     reverse(arr[i], arr[i] + m);
    // }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
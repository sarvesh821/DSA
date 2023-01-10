#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    int prefix[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[i][j - 1];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                arr[i][j] = arr[i][j];
            }
            else
            {
                arr[i][j] = arr[i][j] + arr[i - 1][j];
            }
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int sum = 0;
    for (int li = 0; li < m; li++)
    {
        for (int lj = 0; lj < n; lj++)
        {
            for (int bi = li; bi < m; bi++)
            {
                for (int bj = lj; bj < n; bj++)
                {
                    sum += arr[bi][bj] - arr[li - 1][bj] - arr[bi][lj - 1] + arr[li - 1][lj - 1];
                }
            }
        }
    }
    cout << sum << " ";
    return 0;
}
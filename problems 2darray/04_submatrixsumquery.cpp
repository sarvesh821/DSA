#include <iostream>
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
    int ti, tj, bi, bj;
    cin >> ti >> tj >> bi >> bj;
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int sum = arr[bi][bj] - arr[ti - 1][bj] - arr[bi][tj - 1] + arr[ti - 1][tj - 1];
    cout << sum << endl;
    return 0;
}
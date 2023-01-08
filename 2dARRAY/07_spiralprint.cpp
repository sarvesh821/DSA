#include <iostream>
using namespace std;
void spiralprint(int arr[][1000], int m, int n)
{
    int sr = 0;
    int sc = 0;
    int er = m - 1;
    int ec = n - 1;
    while (sr <= er && sc <= ec)
    {
        // print first row
        for (int i = sr; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }
        sr++;
        // print last col
        for (int i = sr; i <= ec; i++)
        {
            cout << arr[i][ec] << " ";
        }
        ec--;
        // print bottom row
        if (er > sr)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << arr[er][i] << " ";
            }
            er--;
        }

        // print first col
        if (ec > sc)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][sc] << " ";
            }
            sc++;
        }
    }
}
int main()
{
    int arr[1000][1000] = {0};
    int m, n;
    cin >> m >> n;
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
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    spiralprint(arr, m, n);
    return 0;
}
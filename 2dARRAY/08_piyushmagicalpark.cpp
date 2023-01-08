#include <iostream>
using namespace std;
void magicalpark(char arr[][100], int m, int n, int s, int k)
{
    bool sucess = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = arr[i][j];
            if (k < s)
            {
                sucess = false;
                break;
            }
            else if (ch == '.')
            {
                k = k - 2;
            }
            else if (ch == '*')
            {
                k = k + 5;
            }
            else
            {
                break;
            }
            if (j != n - 1)
            {
                k--;
            }
        }
    }
    if (sucess)
    {
        cout << "yes" << endl;
        cout << k << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
int main()
{
    int n, m, s, k;
    cin >> m >> n >> s >> k;
    char arr[100][100];
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
    magicalpark(arr, m, n, s, k);
    return 0;
}
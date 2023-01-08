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
    int key;
    cin >> key;

    int point2 = arr[0][n - 1];
    int i = 0;
    int j = n - 1;
    while (i <= n - 1 && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "yes" << endl;
            cout << i << "," << j << endl;
            break;
        }
        else if (arr[i][j] < key)
        {
            i++;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        
    }

    return 0;
}
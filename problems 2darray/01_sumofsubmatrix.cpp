
#include <iostream>

using namespace std;

const int N = 100;

int n, m;
int arr[N][N];
int sum;

int main()
{
    cin >> n >> m;

    // Read in the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of all submatrices
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int i2 = i1; i2 < n; i2++)
        {
            for (int j1 = 0; j1 < m; j1++)
            {
                for (int j2 = j1; j2 < m; j2++)
                {
                    for (int i = i1; i <= i2; i++)
                    {
                        for (int j = j1; j <= j2; j++)
                        {
                            sum += arr[i][j];
                        }
                    }
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}
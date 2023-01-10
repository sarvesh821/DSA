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
    // we are finding the contribution of element in submatrix
    // element * no of submatrix it is part of
    // no of rows in white  part=i+1
    // no of col in white part=j=1
    // no of rows in green part=m-1;
    // mo of cols in green part=n-1;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j] * (((i + 1) * (j + 1)) * ((m - i) * (n - j)));
        }
    }
    cout << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (arr[i] + arr[j] == sum)
        {
            cout << arr[i] << "," << arr[j] << endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// define a compatator function
bool comp(int a, int b)
{
    cout << a << " " << b << endl;
    return a < b;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
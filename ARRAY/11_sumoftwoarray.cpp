#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n;

    int arr1[n];
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;

    int arr2[m];
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + arr1[i];
    }
    int sum2 = 0;
    for (int i = 0; i < m; i++)
    {
        sum2 = sum2 * 10 + arr2[i];
    }
    int ans = sum + sum2;
    // cout << sum << " ";
    int key = 0;
    while (ans != 0)
    {
        // key = ans % 10;
        v.insert(v.begin(), (ans % 10));
        ans = ans / 10;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",  ";
    }
    cout << "END";

    return 0;
}

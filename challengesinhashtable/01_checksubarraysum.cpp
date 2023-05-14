#include <bits/stdc++.h>
using namespace std;
bool checksum(int arr[], int n)
{
    unordered_set<int> u;
    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += arr[i];
        if (pre == 0 || u.find(pre) != u.end())
        {
            return true;
        }
        u.insert(pre);
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (checksum(arr, n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
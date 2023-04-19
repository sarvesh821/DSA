#include <bits/stdc++.h>
using namespace std;
bool sub(int arr[], int n, int k)
{
    int length = 0;
    int sum = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        length += 1;
        if (length == 2 && curr % k == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {23, 2, 4, 6, 7};
    int n = 5;
    int k = 6;
    if (sub(arr, n, k))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
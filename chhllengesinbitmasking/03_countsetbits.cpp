#include <bits/stdc++.h>
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

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int ch = arr[i];
        while (ch != 0)
        {
            int last = ch & 1;
            sum += last;
            ch = ch >> 1;
        }
        cout << sum << endl;
       
    }
    return 0;
}
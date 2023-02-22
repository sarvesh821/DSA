#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, no;
    cin >> n;
    int arr[64] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> no;
        int j = 0;
        while (no != 0)
        {
            int last = no & 1;
            arr[j] += last;
            j++;
            no = no >> 1;
        }
    }
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    int p = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] % 3;
        ans += (arr[i] * p);
        p = p << 1;
    }

    cout << ans << endl;
    return 0;
}
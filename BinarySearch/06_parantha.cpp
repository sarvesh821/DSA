#include <bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int p, int min)
{
    int paranthas = 0;
    int count = 0;
    int t = 1;
    for (int i = 0; i < n; i++)
    {
        while (count + arr[i] * t <= min)
        {
            count += arr[i] * t;
            paranthas++;
            t++;
        }
        count = 0;
        t = 1;
    }
    // cout << paranthas << endl;
    if (paranthas >= p)
    {
        return true;
    }
    return false;
}
int main()
{
    int p;
    cin >> p;
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // taken rank in sorted ordered
    int time;
    for (int i = 1; i <= p; i++)
    {
        time += i * arr[0];
    }
    int s = 0;
    int e = time;
    int mid;
    int mt = INT_MAX;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (ispossible(arr, n, p, mid))
        {
            mt = min(mt, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << mt;
    return 0;
}
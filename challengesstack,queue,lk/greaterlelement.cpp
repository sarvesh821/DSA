#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int nextgreater = -1;
        int j = i + 1;
        while (j % n != i)
        {
            j = j % n;

            if (arr[j] > arr[i])
            {
                nextgreater = arr[j];
                break;
            }
            j++;
        }

        v.push_back(nextgreater);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
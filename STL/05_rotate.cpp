#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[100]{0};
    int n = sizeof(arr) / sizeof(int);
    // rotate(arr, arr + 2, arr + n);
    int key = 2;
    for (int i = 0; i < n; i++)
    {
        int ele = (i + key) % n;
        arr2[i] = arr[ele];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    // using vector
    vector<int> v{1,2,3,4,5};
    rotate(v.begin(), v.begin() + 2, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // next permutation
    next_permutation(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
    // some more functions
    //  reverse(arr,arr+n);
    //  max(a,b);
    //  min(a,b);
    //  swap(a,b);
}
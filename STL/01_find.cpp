#include <bits/stdc++.h>
// #include<algorithm>
using namespace std;
int main()
{
    int arr[12] = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    // int *it = find(arr, arr + n, key);
    // int index = it - arr;
    // if (index == n)
    // {
    //     cout << "not present" << endl;
    // }
    // else
    // {
    //     cout << "index is : " << index << endl;
    // }

    // search in sorted array
    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    // two find the index we use lower_bound && upper_bound;
    int *it = upper_bound(arr, arr + n, 4);
    int index = it - arr;
    if (index == n)
    {
        cout << "not present" << endl;
    }
    else
    {
        cout << "index is : " << index << endl;
    }
    // we can find oquerence of any no b upper-lower
    return 0;
}
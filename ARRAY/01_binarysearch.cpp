#include <iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int key)
{
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
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
    int key;
    cin >> key;
    cout << binarysearch(arr, 0, n - 1, key) << endl;

    return 0;
}
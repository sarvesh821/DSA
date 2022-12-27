#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 9, 12, 34, 56, 78};
    int n = 9;
    int key;
    cin >> key;
    cout << binarysearch(arr, n, key) << endl;
    return 0;
}
// insertion sort
#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int ele = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > ele)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = ele;
    }
}
int main()
{
    int arr[] = {23, 45, 2, 6, 4, 78, 12};
    int n = 7;
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
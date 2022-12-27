//selection sort
#include <iostream>
using namespace std;
void selectsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {23, 45, 2, 6, 4, 78, 12};
    int n = 7;
    selectsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
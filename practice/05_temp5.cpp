// bubblesort
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{

    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {23, 45, 2, 6, 4, 78, 12};
    int n = 7;
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
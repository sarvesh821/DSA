// bubblesort
#include <iostream>
using namespace std;
bool compare(int a,int b){
    return a<b;
}
void bubblesort(int arr[], int n,bool (&cmp)(int a,int b))
{

    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (cmp(arr[j+1] , arr[j]))
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
    bubblesort(arr, n,compare);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
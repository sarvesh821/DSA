#include <iostream>
#include <climits>
using namespace std;
pair<int, int> largesmall(int arr[], int n)
{
    pair<int, int> p;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    p.first = largest;
    p.second = smallest;
    return p;
}
int main()
{

    int arr[] = {12, 34, 45, 78, 2, 5, 8};
    int n = 7;
    pair<int, int> ans = largesmall(arr, n);
    cout << ans.first << ":" << ans.second << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentsum = 0;
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        if (currentsum > maxsum)
        {
            maxsum = currentsum;
        }
    }
    cout << maxsum << endl;
    return 0;
}
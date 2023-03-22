#include <bits/stdc++.h>
using namespace std;
void countingsort(int arr[], int s, int e)
{
    int largest = -1;
    for (int i = s; i <= e; i++)
    {
        largest = max(largest, arr[i]);
    }
    int *freq = new int[largest + 1];
    for (int i = s; i <= e; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countingsort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void printstr(int i, char arr[])
{
    int j = 0;
    while (i > 0)
    {
        int last = i & 1;
        if (last)
        {
            cout << arr[j];
        }
        j++;
        i = i >> 1;
    }
    cout << endl;
}
void printsubsets(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < (1 << n); i++)
    {
        printstr(i, arr);
    }
    return;
}
int main()
{
    char arr[100];
    cin >> arr;
    printsubsets(arr);
    return 0;
}
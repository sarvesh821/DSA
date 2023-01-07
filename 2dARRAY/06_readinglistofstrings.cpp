#include <iostream>
using namespace std;
int main()
{
    char arr[100][1000];
    int n;
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(arr[i], 1000);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
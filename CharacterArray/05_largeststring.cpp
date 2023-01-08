#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    char a[1000];
    char largest[1000];
    int l = 0;
    int ll = 0;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        l = strlen(a);
        if (l > ll)
        {
            ll = l;
            strcpy(largest, a);
        }
    }
    cout << largest << " and length= " << ll << endl;
    return 0;
}
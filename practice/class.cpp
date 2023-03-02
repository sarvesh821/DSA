#include <bits/stdc++.h>
using namespace std;
void printpattern(int n)
{
    if (n == 0)
    {
        return;
    }
    for (int j = n; j > 0; j--)
    {
        cout << "*"
             << " ";
    }
    cout << endl;
    printpattern(n - 1);
}
int main()
{
    printpattern(5);

    return 0;
}
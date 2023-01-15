#include <bits/stdc++.h>
using namespace std;
void increment(int *xptr)
{
    *xptr = *xptr + 1;
    cout << *xptr << endl;
}
int main()
{
    int a = 10;
    increment(&a);
    cout << a << endl;
    return 0;
}
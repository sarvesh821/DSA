#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x;
    // cout << &x << endl;
    // float y = 5.5;
    // cout << &y << endl;
    // // it dosent work for character
    // char ch = 'A';
    // // Explict type casting from char* to void*
    // cout << (int *)&ch << endl;
    // // declaring a variable
    // int *xptr;
    // xptr = &x;
    // cout << &x << endl;
    // cout << xptr << endl;
    int x = 10;
    int *xptr = &x;
    cout << &x << endl;

    cout << xptr << endl;
    cout << *(&x) << endl;
    cout << *xptr << endl;
    cout << *(&xptr) << endl;
    cout << &(*xptr) << endl;
    int **xp = &xptr;
    cout << xp << endl;
    cout << *xp << endl;
    cout << **xp << endl;

    return 0;
}
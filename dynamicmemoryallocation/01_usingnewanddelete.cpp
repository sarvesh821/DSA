#include <bits/stdc++.h>
using namespace std;
int main()
{
    // allocation
    int a[100] = {0};
    cout << sizeof(a) << endl;
    // a cant be overwritten
    // dynamic allocation
    int n;
    cin >> n;
    int *ptr = new int[n]{0};
    cout << sizeof(ptr) << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
        cout << ptr[i] << " ";
    }
    // ptr can we overwritten;
    //  ptr=new char[45];
    // deallocation
    delete[] ptr;

    return 0;
}
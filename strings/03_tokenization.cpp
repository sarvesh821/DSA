#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    char s[100] = "today is a rainy day ty";
    char *ptr = strtok(s, " ");
    // cout << ptr << endl;
    count++;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        // cout << ptr << endl;
        count++;
    }
    cout << --count;
    return 0;
}
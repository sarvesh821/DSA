#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    char ch[100] = "i am waiting";

    char *ptr = strtok(ch, " ");
    count++;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        count++;
    }
    cout << --count;
    return 0;
}
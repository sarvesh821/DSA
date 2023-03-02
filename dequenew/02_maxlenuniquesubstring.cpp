#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[] = "abbacdeb";
    int n = strlen(arr);
    int cl = 1;
    int ml = 1;
    int maxl = 1;
    int visit[256];
    // put every char in visit to -1;
    for (int i = 0; i < 256; i++)
    {
        visit[i] = -1;
    }
    visit[arr[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        int last_occ = visit[arr[i]];
        // expansion
        if (last_occ == -1 || i - cl > last_occ)
        {
            cl++;
            ml = max(cl, ml);
        }
        // expansion+contraction
        else
        {
            if (cl > ml)
            {
                ml = cl;
            }
            cl = i - last_occ;
        }
        visit[arr[i]] = i;
    }
    if (cl > ml)
    {
        ml = cl;
    }
    cout << ml << endl;
    return 0;
}
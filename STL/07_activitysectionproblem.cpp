#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> node;
bool compare(node a, node b)
{
    if (a.second < b.second)
    {
        return 1;
    }
    else if (a.second > b.second)
    {
        return 0;
    }
    else if (a.second == b.second)
    {
        if (a.second < b.second)
        {
            return 0;
        }
        else if (a.second > b.second)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        pair<int, int> p;
        int a, time = 0, count = 0;
        cin >> a;
        while (a--)
        {
            cin >> p.first;
            cin >> p.second;
            v.push_back(p);
        }
        sort(v.begin(), v.end(), compare);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     pair<int, int> o = v[i];
        //     cout << o.first << " " << o.second << endl;
        // }

        for (int i = 0; i < v.size(); i++)
        {
            pair<int, int> z = v[i];
            if (z.first >= time && z.first < z.second)
            {
                time = z.second;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    // insert
    m.insert(make_pair("mango", 100));
    pair<string, int> p;
    p.first = "apple";
    p.second = 120;
    m.insert(p);
    m["banana"] = 60;
    // search
    string key;
    cin >> key;
    auto it = m.find(key);
    if (it != m.end())
    {
        cout << key << "->" << m[key] << endl;
    }
    cout << m["banana"] << endl;

    m["banana"] += 45;
    cout << m["banana"] << endl;

    m.erase(key);
    if (m.count(key))
    {
        cout << key << "->" << m[key] << endl;
    }
    else
    {
        cout << "not found" << endl;
        ;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "and" << it->second << endl;
    }
    return 0;
}
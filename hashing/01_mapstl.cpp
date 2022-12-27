#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> m;
    // way1
    m.insert(make_pair("mango", 100));
    // way2
    pair<string, int> p;
    p.first = "orange";
    p.second = 200;
    m.insert(p);
    // way3
    m["banana"] = 350;

    // search
    string fruit;
    cin >> fruit;
    auto it = m.find(fruit);
    if (it != m.end())
    {
        cout << "price of " << fruit << " is " << m[fruit] << endl;
    }
    else
    {
        cout << "fruit not present" << endl;
    }
    // update
    m["banana"] += 30;

    // erase
    m.erase(fruit);
    // way2
    if (m.count(fruit))
    {
        cout << "price is " << m[fruit] << endl;
    }
    else
    {
        cout << "couldnt found" << endl;
    }
    m["grapes"] = 123;
    m["lichi"] = 90;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        // we can use it->first or(*it).first
        cout << it->first << ":" << it->second << endl;
    }
    // way2
    for (auto p : m)
    {
        cout << p.first << ":" << p.second << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> d{1, 2, 3, 4, 5, 6};
    d.push_back(18);
    d.pop_back();
    // insert in middle
    d.insert(d.begin() + 3, 4, 100);
    d.erase(d.begin() + 3);
    d.erase(d.begin() + 2, d.begin() + 5);
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;
    d.resize(19);
    cout << d.capacity() << endl;
    d.clear();
    cout << d.size() << endl;
    if (d.empty())
    {
        cout << "empty" << endl;
    }
    d.push_back(17);
    d.push_back(12);
    d.push_back(78);
    cout << d.front() << endl;
    cout << d.back() << endl;
    //we can use v.reserve(1000);
    //to fix the size untill it reach 1000;

    return 0;
}
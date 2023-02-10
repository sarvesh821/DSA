#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l{6, 1, 3, 4, 2, 1, 1, 9};
    l.push_back(34);
    l.sort();
    // pop_back
    // pop_front
    l.remove(1);
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = l.begin();
    it++;
    it++;
    // l.erase(it);
    l.insert(it, 789);
    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
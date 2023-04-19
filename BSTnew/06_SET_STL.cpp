// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     int arr[] = {1, 1, 2, 2, 4, 5, 6, 7, 7};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     s.erase(4);
//     auto it = s.find(5);
//     s.erase(it);
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<pair<int, int>> s;
//     s.insert(make_pair(10, 1));
//     s.insert(make_pair(20, 1));
//     s.insert(make_pair(10, 2));
//     s.insert(make_pair(30, 1));
//     s.insert(make_pair(10, 56));
//     // auto it = s.lower_bound(make_pair(10, 1));
//     auto it = s.upper_bound(make_pair(10, INT_MAX));
//     cout << it->first << "," << it->second << endl;

//     for (auto p : s)
//     {
//         cout << p.first << " and " << p.second << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// class person_compare
// {
// public:
//     bool operator()(const std::pair<string, int> p1, const std::pair<string, int> p2)
//     {
//         return p1.second < p2.second;
//     }
// };
// typedef multiset<int>::iterator It;
int main()
{
    // int arr[] = {10, 20, 30, 20, 10, 30, 30, 80};
    // multiset<int> m(arr, arr + 8);
    // m.erase(20);
    // m.insert(80);
    // for (int x : m)
    // {
    //     cout << x << " ";
    // }
    // cout << m.count(10) << " ";
    // auto it = m.find(20);
    // cout << (*it) << endl;
    // pair<It, It> range = m.equal_range(30);
    // for (auto it = range.first; it != range.second; it++)
    // {
    //     cout << (*it) << "-";
    // }
    // cout << endl;
    // // lowerbound>= and upperbound >
    // for (auto it = m.lower_bound(10); it != m.upper_bound(77); it++)
    // {
    //     cout << *it << ";";
    // }
    pair<string, int> p1 = make_pair("d", 123);
    pair<string, int> p2 = make_pair("c", 723);
    pair<string, int> p3 = make_pair("b", 45);
    pair<string, int> p4 = make_pair("a", 12);
    multiset<pair<string, int>> m;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m.insert(p4);
    for (auto x : m)
    {
        cout << x.first << "->" << x.second << endl;
    }
    return 0;
}
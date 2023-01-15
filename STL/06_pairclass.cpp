#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, char> p;
    p.first = 100;
    p.second = 'a';
    cout << p.first << p.second << endl;
    // way 2
    pair<int, char> p1(p);
    cout << p1.first << p1.second << endl;
    // using make_pair
    pair<int, char> p2 = make_pair(100, 'A');
    cout << p2.first << p2.second << endl;
    // ANOTHER WAY
    pair<pair<int, int>, string> p4;
    p4.first.first = 20;
    p4.first.second = 34;
    p4.second = "sarvesh";
    cout << p4.first.first << " " << p4.first.second << " " << p4.second << endl;

    return 0;
}
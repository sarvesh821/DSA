#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s0;
    string s1 = "hello world";
    string s2("hello");
    string s3(s2);
    string s4 = s3;
    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);
    //  cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    if (s0.empty())
    {
        cout << "yes" << endl;
    }
    s0.append("i love c++ ");
    cout << s0 << endl;
    s0 += "and python";
    cout << s0 << endl;
    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;
    return 0;
    s1 = "mango";
    s0 = "apple";
    cout << s1.compare(s0) << endl;
}
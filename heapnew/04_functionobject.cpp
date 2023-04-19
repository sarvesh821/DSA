#include <bits/stdc++.h>
using namespace std;
class fun
{
public:
    void operator()(string s)
    {
        cout << "having fun with" << s;
    }
};
class person
{
public:
    string name;
    int age;
    person()
    {
    }
    person(string n, int a)
    {
        name = n;
        age = a;
    }
};
class personcompare
{
public:
    bool operator()(person a, person b)
    {
        return a.age < b.age;
    }
};
int main()
{
    priority_queue<person, vector<person>, personcompare> pq;
    // fun f;
    // f("c++");
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> name >> age;
        person p(name, age);
        pq.push(p);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        person p = pq.top();
        cout << p.name << "->" << p.age << endl;
        pq.pop();
    }

    return 0;
}
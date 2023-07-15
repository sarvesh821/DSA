#include <bits/stdc++.h>
using namespace std;
// class node
// {
// public:
//     // string name;
//     list<string> nbrs;
//     // node(string name)
//     // {
//     //     this->name = name;
//     // }
// };
class graph
{
    unordered_map<string, list<string> *> m;

public:
    graph(vector<string> cities)
    {
        for (auto city : cities)
        {
            m[city] = new list<string>;
        }
    }
    void addEdge(string x, string y, bool undir = false)
    {
        m[x]->push_back(y);
        if (undir)
        {
            m[y]->push_back(x);
        }
    }
    void printAdjList()
    {
        for (auto citypair : m)
        {

            cout << citypair.first << "-->";
            for (auto nbr : *citypair.second)
            {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    vector<string> cities = {"delhi", "london", "paris", "new York"};
    graph g(cities);
    g.addEdge("delhi", "london");
    g.addEdge("new York", "london");
    g.addEdge("delhi", "paris");
    g.addEdge("paris", "new york");
    g.printAdjList();
}
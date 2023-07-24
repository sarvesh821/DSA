#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    vector<vector<int>> adj;

public:
    Graph(int v)
    {
        V = v;
        adj.resize(V);
    }
    void addEdge(int a, int b, bool undir = true)
    {
        adj[a].push_back(b);
        if (undir == true)
        {
            adj[b].push_back(a);
        }
    }
    void shortestPath(int source,int dest=-1)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};
        int *dis = new int[V]{0};
        int *parent = new int[V];
        for (int i = 0; i < V; i++)
        {
            parent[i] = -1;
        }
        q.push(source);
        visited[source] = true;
        parent[source] = source;
        dis[source] = 0;
        while (!q.empty())
        {
            int f = q.front();
            cout << f << endl;
            q.pop();
            for (auto nbr : adj[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    parent[nbr] = f;
                    dis[nbr] = dis[f] + 1;
                    visited[nbr] = true;
                }
            }
        }
        // print shortest path to all nodes from source node
        for (int i = 0; i < V; i++)
        {
            cout << "shortest dis to " << i << "is " << dis[i] << endl;
        }
        if(dest!=-1){
            int temp=dest;
            while(temp!=source){
                cout<<temp<<"--";
                temp=parent[temp];

            }
            cout<<source;
        }
    }
};
int main()
{
   
Graph g(7);
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(2,3);
g.addEdge(3,5);
g.addEdge(5,6);
g.addEdge(4,5);
g.addEdge(0,4);
g.addEdge(3,4);
g.shortestPath(1,6);
}
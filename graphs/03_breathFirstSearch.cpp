#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<vector<int>>adj;
    public:
    Graph(int v){
        V=v;
        adj.resize(V);
    }
    void addEdge(int a,int b,bool undir=true){
        adj[a].push_back(b);
        if(undir){
            adj[b].push_back(a);
        }
    }
    void bfs(int source){
        queue<int>q;
        bool *visited=new bool[V]{0};
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int front=q.front();
            cout<<front<<endl;
            q.pop();
            for(auto nbr:adj[front]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }

        }
    }
      void printList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (int j : adj[i])
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main(){
Graph g(7);
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(2,3);
g.addEdge(3,5);
g.addEdge(5,6);
g.addEdge(4,5);
g.addEdge(0,4);
g.addEdge(3,4);
g.bfs(1);
//g.printList();
}
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
    void dfsHelper(int node,bool *visited){
    visited[node]=true;
    cout<<node<<",";
    for(auto nbr:adj[node]){
        if(!visited[nbr]){
            dfsHelper(nbr,visited);
        }
    }
    }
void Dfs(int source){
    bool *visited=new bool[V]{0};
    dfsHelper(source,visited);
}
};
int main(){
Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);
    g.Dfs(1);
}
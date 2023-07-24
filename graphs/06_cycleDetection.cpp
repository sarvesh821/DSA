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
    void addEdge(int a,int b){
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool dfs(int node,vector<bool> &visited,int parent){
          visited[node]=true;
          for(auto nbr:adj[node]){
            if(!visited[nbr]){
                bool nbrFoundACycle=dfs(nbr,visited,node);
                if(nbrFoundACycle){
                    return true;
                }
            }
            else if(nbr!=parent){
                return true;
            }
          }
          return false;
    }
    bool contains_Cycle(){
        vector<bool>visited(V,false);
        return dfs(0,visited,-1);
    }
};
int main(){
 Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    cout<<g.contains_Cycle()<<endl;
 
    
}
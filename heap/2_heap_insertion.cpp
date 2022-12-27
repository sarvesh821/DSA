#include<iostream>
#include<vector>
using namespace std;
void buildheap(vector<int> &v){
    for(int i=2;i<v.size();i++){
        int idx=i;
        int parent=i/2;
        while(idx>1 && v[idx]>v[parent]){
            swap(v[idx],v[parent]);
            idx=parent;
            parent=parent/2;
        }
    }
}

int main()
{
    vector<int>v{-1,10,20,5,6,1,8,9,4};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    buildheap(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
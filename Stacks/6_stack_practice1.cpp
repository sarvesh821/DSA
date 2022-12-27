#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    stack<int>stk;
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        if(a==2){
   cin>>b;
        }
     
        if(a==2){
stk.push(b);
        }
        if(a==1){
            int ele=stk.top();
            stk.pop();
          v.push_back(ele);
        }
        if(stk.empty()){
            v.push_back(-1);
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==-1){
            cout<<"no code"<<endl;
        }
        else{
            cout<<v[i]<<endl;
        }
    }
    return 0;
}
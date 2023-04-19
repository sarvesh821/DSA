#include<bits/stdc++.h>
using namespace std;
int main()
{  

    int t;
    cin>>t;
    while(t--){
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>um;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            um[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            while(!pq.empty()){
                
            }
        }

for (auto i : um)
{
    
}

    }
return 0;
}
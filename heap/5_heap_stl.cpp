#include<iostream>
#include<queue>
using namespace std;
//priority_queue<int> pq;
priority_queue<int,vector<int>,greater<int>>pq;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++){
    int no;
    cin>>no;
    pq.push(no);
}
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
    return 0;
}
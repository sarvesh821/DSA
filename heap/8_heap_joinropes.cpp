#include<iostream>
#include<queue>
using namespace std;
int joinropes(int ropes[],int n){
priority_queue<int,vector<int>,greater<int>>pq{ropes,ropes+n};
int cost=0;
while(pq.size()>1){
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    int new_rope=a+b;
    cost+=new_rope;
pq.push(new_rope);
}
return cost;
}
int main()
{
    int ropes[]={2,3,4,6};
    int n=4;
    cout<<joinropes(ropes,n);
    return 0;
}
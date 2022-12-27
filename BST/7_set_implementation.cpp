#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<pair<int,int>>s;
//     int arr[]={10,8,9,10,11,4,56,8,9};
//     int n=sizeof(arr)/sizeof(int);
//      for(int i=0;i<n;i++){
// s.insert(arr[i]);
//      }
//      s.erase(9);
//      auto it=s.find(8);
//      s.erase(it);
//      for(set<int>::iterator it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//      }

s.insert(make_pair(5,10));
s.insert(make_pair(2,5));
s.insert(make_pair(5,100));
s.insert(make_pair(8,9));

s.insert(make_pair(4,10));
s.insert(make_pair(5,3));
s.insert(make_pair(2,10));
s.erase(make_pair(5,3));
s.erase(s.find(make_pair(2,5)));
auto it=s.lower_bound(make_pair(2,5));
cout<<it->first<<","<<it->second<<endl;
for(auto p:s){
    cout<<p.first<<" "<<p.second<<endl;
}

    return 0;
}
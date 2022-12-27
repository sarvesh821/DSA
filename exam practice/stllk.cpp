// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l1;
//     l1.push_front(34);
//      l1.push_front(45);
//       l1.push_front(56);
//        l1.push_front(67);
//         l1.push_front(78);
//         l1.push_back(234);
//         l1.pop_back();
//         l1.pop_front();
//        cout<< l1.front()<<endl;
//        l1.sort();
//        l1.reverse();
//       auto it=l1.begin();
//       it++;
//       it++;
//       l1.insert(it,345);

       
      
//         for(auto s:l1){
//         cout<<s<<"-->";
//         }

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    int n;
    cin>>n;
    while(n--){
        int o;
        cin>>o;
        if(o==1){
            int data;
            cin>>data;
            s.push(data);
        }
        if(o==2){
            cout<<s.top();
            s.pop();
        }
        if(o==3){
          int minele=INT_MAX;
            while(!s.empty()){
                
                if(s.top()<minele){
                    minele=s.top();
                }
                s.pop();
            }
            cout<<minele;
        }
    }
}
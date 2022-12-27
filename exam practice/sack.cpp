// //  #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// using namespace std;
// class stack{
//     private:
//     vector<int>v;
//     public:
//     void push(int data){
//         v.push_back(data);
//     }
//     void pop(){
//         if(!empty()){
//   v.pop_back();
//         }
      
//     }
//     int top(){
//         return v[v.size()-1];
//     }
//     bool empty(){
//         return v.size()==0;
//     }
// };
// int main(){
//       stack s;
//       s.push(32);

      
// }
#include<iostream>
#include<vector>
using namespace std;
class stack{
    private:
    vector<int>v;
    public:
    void push(int data){
        v.push_back(data);
    }
    void pop(){
        v.pop_back();
    }
    bool empty(){
        return v.size()==0;
    }
    int top(){
        return v[v.size()-1];
    }
};
int main(){
stack s;

}
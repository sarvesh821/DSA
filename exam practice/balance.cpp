// #include<bits/stdc++.h>
// using namespace std;
// bool balance(string s){
//     stack<char>v;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='{' || s[i]=='(' || s[i]=='['){
//             v.push(s[i]);
//         }
//         else{
//             if(!v.empty()){
//                 if(s[i]==')' && v.top()=='(' ){
//                     v.pop();
//                 }
//                 else if(s[i]=='}' && v.top()=='{'){
//                     v.pop();
//                 }
//                 else if(s[i]==']' && v.top()=='['){
//                     v.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }

//     }
//     if(v.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     string s="{[()]}";
//     if(balance(s)){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }
// } 
// #include<bits/stdc++.h>
// using namespace std;
// bool balance(string s){
//     stack<char>v;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//             v.push(s[i]);
//         }
//         else{
//             if(!v.empty()){
//                 if(s[i]=='}' && v.top()=='{'){
//                     v.pop();
//                 }
//                 else if(s[i]==']' && v.top()=='['){
//                     v.pop();
//                 }
//                else  if(s[i]==')' && v.top()=='('){
//                     v.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     if(v.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//       string s="{[()]}}";
//     if(balance(s)){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }  
// }
#include<bits/stdc++.h>
using namespace std;
bool balanceparenthesis(string s){
    stack<char>s1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            s1.push(s[i]);
        }
        else{
            if(!s1.empty()){
                if(s[i]==']' && s1.top()=='['){
                    s1.pop();
                }
                else if(s[i]==')' && s1.top()=='('){
                    s1.pop();
            }
            else if(s[i]=='}' && s1.top()=='{'){
                s1.pop();
            }
            else{
                return false;
            }
            }
            else{
                return false;
            }
        }
    }
    if(s1.empty()){
        return true;
    }
    else{
        return false;
    }
}
int balancep(string s){
    int ans=0;
    int bal=0;
    for(int i=0;i<s.length();i++){
   bal+=s[i]=='['?1:-1;
      if(bal==-1){
        ans++;
        bal++;
    }
    }
 
    return ans+bal;
}
int main(){
    string s="))";
    
        cout<<balancep(s)<<endl;
    
    
}
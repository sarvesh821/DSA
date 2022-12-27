// #include<bits/stdc++.h>
// using namespace std;
// int findreversls(string s){
//     stack<char>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//      for(int i=0;i<s.length();i++){
//         if(s[i]==']' && !s1.empty()){
//             if(s1.top()=='['){
//                 s1.pop();
//             }
//             else{
//                 s1.push(s[i]);
//             }
//         }
//         else{
//             s1.push(s[i]);
//         }
//      }
//      int rl=s1.size();
//      int n=0;
//      while(!s1.empty() && s1.top()=='['){
//         s1.pop();
//         n++;
//      }
//      return (rl/2+n%2);
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         cout<<findreversls(s)<<endl;;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='/' || ch=='*'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixpostfix(string s){
    stack<char>s1;
    string ans="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>=0 && ch<=9){
            ans+=ch;
        }
        else if(ch=='('){
            s1.push('(');
        }
        else if(ch==')'){
            while(s1.top()!='('){
                ans+=s1.top();
                s1.pop();
            }
            s1.pop();
        }
        else{
            while(!s1.empty() && prec(s[i])<=prec(s1.top())){
                ans+=s1.top();
                s1.pop();
            }
            s1.push(ch);
        }
    }
    while(!s1.empty()){
        ans+=s1.top();
        s1.pop();
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
   cout<< infixpostfix(s);
}
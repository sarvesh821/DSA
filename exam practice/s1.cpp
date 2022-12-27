// #include<bits/stdc++.h>
// using namespace std;
// int prec(char ch){
//     if(ch=='^'){
//         return 3;
//     }
//     else if(ch=='/' || ch=='*'){
//         return 2;
//     }
//     else if(ch=='+' || ch=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// string infixtopostfix(string s){
// stack<char>s1;
// string ans="";
// for(int i=0;i<s.length();i++){
//     char ch=s[i];
//     if((ch>='a' && ch<='z') ||( ch>='A' && ch<='Z' )|| (ch>=0 && ch<=9)){
//         ans+=s[i];
//     }
//     else if(ch=='('){
//         s1.push('(');
//     }
//     else if(ch==')'){
//         while(s1.top()!='('){
//             ans+=s1.top();
//             s1.pop();
//         }
//         s1.pop();
//     }
//     //   else if(ch==')'){
//     //         while(s1.top()!='('){
//     //             ans+=s1.top();
//     //             s1.pop();
//     //         }
//     //         s1.pop();
//     //     }
//      else{
//             while(!s1.empty() && prec(s[i])<=prec(s1.top())){
//                 ans+=s1.top();
//                 s1.pop();
//             }
//             s1.push(ch);
//         }
   
// }
//  while(!s1.empty()){
//         ans+=s1.top();
//         s1.pop();
//     }
//     return ans;
// }
// int main(){
//    string s;
//     cin>>s;
//     cout<<infixtopostfix(s);

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[100];
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int j;
   for(int i=0;i<n;i++){
    if(arr[i]%2!=0 || arr[i]<0){
        for( j=i;j<n;j++){
            arr[j]=arr[j+1];
        }
        n--;
        j--;

    }
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }


}
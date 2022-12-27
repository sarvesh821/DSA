#include<iostream>
#include<stack>
using namespace std;
stack<char>stk;
bool isvalid(char s[]){
  for(int i=0;s[i]!='\0';i++){
    if(s[i]=='('){
        stk.push(s[i]);
    }
    else if(s[i]==')'){
        if(stk.empty() || stk.top()!='('){
            return false;
        }
        stk.pop();
    }
  }
  return stk.empty();
}
int main()
{
    char s[100]="((()))";
    if(isvalid(s)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
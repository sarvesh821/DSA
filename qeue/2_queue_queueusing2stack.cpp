#include<iostream>
#include<stack>
using namespace std;
template<typename t>
class queue{
stack<t>s1;
stack<t>s2;
public:
void push(t x){
    s1.push(x);
}
void pop(){
    if(s1.empty()){
        return;
    }
    while(s1.size()>1){
        t element=s1.top();
        s2.push(element);
        s1.pop();
    }
    s1.pop();
    while(!s2.empty()){
         t element=s2.top();
        s1.push(element);
        s2.pop();
    }
    

}
t top(){
    while(s1.size()>1){
         t element=s1.top();
        s2.push(element);
        s1.pop();
    }
    t ele=s1.top();
    s2.push(ele);
       while(!s2.empty()){
         t element=s2.top();
        s1.push(element);
        s2.pop();
    }
    return ele;
   
}
int getsize(){
    return s1.size()+s2.size();
}
bool isempty(){
      return getsize()==0;
}
};
int main()
{
        queue<int> s;
    s.push(23);
    s.push(24);
    cout << s.top() << endl;
    s.push(25);
    s.push(26);
    s.push(27);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    // cout<<s.getsize()<<endl;
    // cout<<s.isempty()<<endl;
    return 0;
}
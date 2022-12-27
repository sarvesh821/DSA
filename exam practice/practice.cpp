// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // sort(arr,arr+n);
//     // int temp[100];
//     // int j=0;
//     // for(int i=0;i<n;i++){
//     //     if(arr[i]!=arr[i+1]){
//     //         temp[j++]=arr[i];
//     //     }
//     // }
//     // //temp[j++]=arr[n-1];
//     // for(int i=0;i<n;i++){
//     //     arr[i]=temp[i];
//     // }
//     // for(int i=0;i<j;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 for (int k = j; k < n; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int no;
//     cin >> no;
//     int arr[100];
//     for (int i = 0; i < no; i++)
//     {
//         cin >> arr[i];
//     }
//     int p = 0;
//     int n = 0;
//     int e = 0;
//     int o = 0;
//     int z = 0;
//     for (int i = 0; i < no; i++)
//     {

//         if (arr[i] == 0)
//         {
//             z++;
//         }
//         if (arr[i] > 0)
//         {
//             p++;
//         }

//         if (arr[i] < 0)
//         {
//             n++;
//         }

//         if (arr[i] % 2 == 0)
//         {
//             e++;
//         }
//         if (arr[i] % 2 != 0)
//         {
//             o++;
//         }
//     }
//     cout << p << endl;
//     cout << n << endl;
//     cout << z << endl;
//     cout << o + z << endl;
//     cout << e << endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int find(string s){
//     int bal=0;
//     int ans=0;
//     for(int i=0;i<s.length();i++){
//         bal+=s[i]=='['?1:-1;
//         if(bal==-1){
//             ans++;
//             bal++;
//         }

//     }
//     return bal+ans;
// }
// int main(){
//     string s="[]";
//     cout<<find(s)<<endl;;

// }
// #include<iostream>
// #include<stack>
// using namespace std;
// stack<int> s;
// // class stack{
// // private:
// // vector<int>v;
// // public:
// // void push(int data){
// //     v.push_back(data);
// // }
// // void pop(){
// //     v.pop_back();
// // }
// // void display(){
// //     if(v.size)
// //     cout<<v[v.size()-1]<<" ";
// //     pop();
// // }

// // };
// // Write your code here

// int main()
// {

// 	int num_oper;
// 	cin>>num_oper;                           // Number of operations to be performed on the stack
// 	while(num_oper--)
// 	{
// 		int choice,e;
// 		cin>>choice;                   // choice=1 for Push operation and choice=2 for Pop operation
// 		if(choice==1)
// 		{
// 			cin>>e;
// 			s.push(e);
// 		}
// 		else if(choice==2)
// 		{
// 				s.pop();
// 		}

//     }
//     if(s.empty()){
//         cout<<"stack empty"<<endl;
//     }
//     else{
//  while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//      }
//     }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;

//    int data;
//    cin>>data;
//    while(data!=-1){
//     v.push_back(data);
//     cin>>data;
//    }
//    int key;
//    cin>>key;
//   v.push_back(key);

//  sort(v.begin(),v.end());
//  for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";

//  }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l1;
//     int data;
//     cin>>data;
//     while(data!=-99){
//         l1.push_back(data);
//         cin>>data;
//     }
//     l1.reverse();
//     for(auto s:l1){
//         cout<<s<<" ";
//     }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l1;
//     int n;
//     cin>>n;
//     while(n--){
//         int data;
//         cin>>data;
//         l1.push_back(data);
//     }
//     l1.sort();
//     for(auto s:l1){
//         cout<<s<<" ";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int o;
//         cin >> o;
//         if (o == 1)
//         {
//             int data;
//             cin >> data;
//             s.push(data);
//         }
//         if (o == 2)
//         {
//             if (s.empty())
//             {
//                 cout << -1<<" ";
//             }
//             else
//             {
//                 cout << s.top()<<" ";
//                 s.pop();
//             }
//         }
//         if (o == 3)
//         {
//              if (s.empty())
//             {
//                 cout << -1<<" ";
//             }
//             else
//             {
//              stack<int>s1;
//              int min=INT_MAX;
//              while(!s.empty()){
//                 s1.push(s.top());
//                 s.pop();
//               if(s1.top()<min){
//                 min=s1.top();
//               }
//              }
//              while(!s1.empty()){
//                 s.push(s1.top());
//                 s1.pop();
//              }
//            cout<<min<<" ";
//         }
//     }
// }}
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// node*takeinput(){
// int data;
// cin>>data;
// node*head=NULL;
// node*tail=NULL;
// while(data!=-1){
//     node*newnode=new node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//     }
//     else{
//         tail->next=newnode;
//         tail=tail->next;
//     }
//     cin>>data;
// }
// return head;

// }
// int count(node*head){
//     if(head==NULL){
//         return 0;
//     }
//     int count=0;
//     while(head!=NULL){
//         count++;
//         head=head->next;
//     }
//     return count;
// }
// node* deletemid(node*head){
//     if(head==NULL ){
//         return 0;
//     }
//     if(head->next==NULL){
//         delete head;
//         return NULL;
//     }
//     node*temp=head;
//     int mid1=count(head);
  
//     int mid=mid1/2;
//     while(mid-->1){
//         head=head->next;
//     }
//     head->next=head->next->next;
//     return temp;
    

// }
// void print(node*head){
//     if(head==NULL){
//         return;
//     }
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// int main(){
//     node*head=takeinput();
    
//     cout<<endl;
    
//     print(deletemid(head));
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;

//     int n;
//     cin>>n;
//     while(n--){
//         int data;
//         cin>>data;
//         v.push_back(data);
//     }
//     int max=*max_element(v.begin(),v.end());
//     int min=*min_element(v.begin(),v.end());
  
//      cout<<min<<" ";
//     //reverse(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//      cout<<max<<" ";
    

// }
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;
// void reverse(string &str)
// {
// //Write your code here
// int s=0;
// int e=str.length();
// while(s<=e){
//     swap(str[s],str[e]);
//     s++;
//     e--;
// }
// }
// int main()
// {
//     string str; 
//     cin>>str;
//     reverse(str);
//     cout << str;
//      return 0;
// }



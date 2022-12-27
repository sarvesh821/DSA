// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     map<int,int>m;
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //         int data;
// //         cin>>data;

// //         m[i]=data;
// //     }
// //     for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
// //         cout<<(*it).second<<" ";
// //     }
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int j;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0 || arr[i]<0){
//             for(j=i;j<n;j++){
//                 arr[j]=arr[j+1];
//             }
//             n--;
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int find(string s){
//     stack<char>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='}' && !s1.empty()){
//           if(s1.top()=='{'){
//             s1.pop();
//           }
//           else{
//             s1.push(s[i]);
//           }
//         }
//         else{
//             s1.push(s[i]);
//         }
//     }
//     int rl=s1.size();
//     int n=0;
//     while(!s1.empty() && s1.top()=='{'){
//         s1.pop();
//         n++;
//     }
//     return (rl/2+n%2);
// }
// int find(string s){
//     stack<char>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//         for(int i=0;i<s.length();i++){
//         if(s[i]==']' && !s1.empty()){
//           if(s1.top()=='['){
//             s1.pop();
//           }
//           else{
//             s1.push(s[i]);
//           }
//         }
//         else{
//             s1.push(s[i]);
//         }
//     }
//       int rl=s1.size();
//     int n=0;
//     while(!s1.empty() && s1.top()=='['){
//         s1.pop();
//         n++;
//     }
//     return (rl/2+n%2);
// }
// int find(string s){
//     stack<int>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//         for(int i=0;i<s.length();i++){
//         if(s[i]==']' && !s1.empty()){
//           if(s1.top()=='['){
//             s1.pop();
//           }
//           else{
//             s1.push(s[i]);
//           }
//         }
//         else{
//             s1.push(s[i]);
//         }
//     }
//      int rl=s1.size();
//     int n=0;
//        while(!s1.empty() && s1.top()=='['){
//         s1.pop();
//         n++;
//     }
//   return (rl/2+n%2);
// }
// int findreversals(string s){
//     stack<int>s1;
//     int len=s.length();
//     if(len%2!=0){
//         return -1;
//     }
//     for(int i=0;i<s.length();i++){
//         if(s[i]==']' && !s1.empty()){
//            if(s1.top()=='['){
//             s1.pop();
//            }
//            else{
//             s1.push(s[i]);
//            }
//         }
//         else{
//             s1.push(s[i]);
//         }
//         int rl=s1.size();
//         int n=0;
//         while(!s1.empty() && s1.top()=='['){
//             s1.pop();
//             n++;
//         }
//         return rl/2+n%2;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//     cout<<find(s)<<endl;;
//     }
   

// }
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
// 	int data;
// 	Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };


// void insertHead(Node*head,int val)
// {
    
//     Node* newNode = new Node(val);
//     if(head==NULL){
//         head=newNode;
//     }
	
	
// 	newNode->next = head;
// 	head = newNode;
// }


// Node* findmid(Node*head){
  
//     if(head==NULL){
//         return head;
//     }
//     Node*slow=head;
//     Node*fast=head;
// Node*perv=NULL;
//     while(fast!=NULL && fast->next!=NULL){
//            slow=slow->next;
//            perv=slow;
//         fast=fast->next->next;
     
//     }
// perv->next=slow->next;


//     delete slow;
//     cout<<head->data;
//     return head;
// }
// Node* deleteMid(Node*head)
// {
   
//      if(head==NULL){
//         return head ;
//     }
//     if(head->next==NULL){
//         delete head;
//         return NULL;
//     }
//       Node*temp=findmid(head);
//       Node*nxt=temp;

//         // Write your code here	
// }
// void show(Node*head)
// {
    
//     if(head==NULL){
//         return;
//     }
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
//         // Write your code here	

// }
// int main()
// {
//     Node* head = NULL;
// 	int n;
// 	cin >> n;
// 	while (n != -1)
// 	{
// 		insertHead(head,n);
// 		cin >> n;
// 	}

// 	show(findmid(head));
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[100];
//    int k=0;
//    int data;
//    cin>>data;
//    while(data!=-1){
//     arr[k++]=data;
//     cin>>data;
//    }
//    int n=sizeof(arr)/sizeof(int);
//    cout<<n<<endl;
//    sort(arr,arr+n);
//    int mid=(0+n-1)/2;
//    int key=arr[mid];
//    int j;
//    for(int i=0;i<n;i++){
//     if(arr[i]==key){
//         for( j=i;j<n;j++){
//             arr[j]=arr[j+1];
//         }
//         n--;
//         j--;
//     }

//    }
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int data;
    cin>>data;
    while(data!=-1){
        v.push_back(data);
        cin>>data;
    }
    //sort(v.begin(),v.end());
    int s=v.size();
    int mid=s/2;
    for(int i=mid;i<v.size();i++){
        v[i]=v[i+1];
    }
    reverse(v.begin(),v.end()-1);
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
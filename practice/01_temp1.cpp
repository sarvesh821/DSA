#include<iostream>
using namespace std;
int find(int arr[],int n,int key){
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            idx=i;
            break;
        }
    }
    return idx;
}
int main()
{
    int arr[]={13,12,45,6,9,3,48};
      int n=7;
      int key;
      cin>>key;
      cout<<find(arr,n,key)<<endl;
    return 0;
}
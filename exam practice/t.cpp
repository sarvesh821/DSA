#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int minidx=0;
    int maxidx=6;
    for(int i=0;i<7;i++){
        if(i%2==0){
            arr[i]=arr[maxidx];
            maxidx--;
        }
        else{
            arr[i]=arr[minidx];
            minidx++;
        }

    }
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
}
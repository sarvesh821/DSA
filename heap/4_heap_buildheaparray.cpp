#include<iostream>
#include<vector>
using namespace std;
bool compare(int a,int b){
    return a>b;
    }
     void heapify(int idx,vector<int> &arr){
        int left=2*idx;
        int right=(2*idx)+1;
        int minidx=idx;
        int lastidx=arr.size()-1;
        if(left<=lastidx && compare(arr[left],arr[minidx])){
            minidx=left;
        }
        if(right<=lastidx && compare(arr[right],arr[minidx])){
            minidx=right;
        }
        if(minidx!=idx){
            swap(arr[idx],arr[minidx]);
            heapify(minidx,arr);
        }

    }
 void buildheap(vector<int> &arr){
         for(int i=(arr.size()-1)/2;i>=1;i--){
            heapify(i,arr);
         }}

int main()
{
    vector<int>arr{-1,10,20,5,6,1,8,9,4};
    buildheap(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
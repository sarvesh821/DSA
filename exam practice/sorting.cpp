// // //selection sort
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int arr[100];
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
//     //selection sort
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]>arr[j]){
//     //             swap(arr[i],arr[j]);

//     //         }
//     //     }
//     // }
//     //bubble sort
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<n-1;j++){
//     //         if(arr[j]>arr[j+1]){
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     }
//     // }
//     //insertion sort
//     // int j,key;
//     // for(int i=1;i<n;i++){
//     //      key=arr[i];
//     //      j=i-1;
//     //      while(j>=0 && arr[j]>key){
//     //         arr[j+1]=arr[j];
//     //         j=j-1;
//     //      }
//     //      arr[j+1]=key;

//     // }
//     //using stl
//     //sort(arr,arr+n);



//     //insertion sort
// //     for(int i=1;i<n;i++){
// //         int key=arr[i];
// //         int j=i-1;
// //         while(j>=0 && arr[j]>key){
// //             arr[j+1]=arr[j];
// //             j=j-1;
// //         }
// //         arr[j+1]=key;
// //     }
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
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
//     // for(int i=0;i<n;i++){
//     //     for(int j=i+1;j<n;j++){
//     //         if(arr[i]>arr[j]){
//     //             swap(arr[i],arr[j]);
//     //         }
//     //     }
//     // }
//     // for(int i=0;i<n-1;i++){
//     //     for(int j=0;j<n-i-1;j++){
//     //         if(arr[j]>arr[j+1]){
//     //             swap(arr[j],arr[j+1]);
//     //         }
//     //     }
//     // }
//     int j,key;
//    for(int i=1;i<n;i++){
//     int key=arr[i];
//     int j=i-1;
//     while(j>=0 && arr[j]>key){
//         arr[j+1]=arr[j];
//            j=j-1;
//     }
 
//  arr[j+1]=key;
 
//    }
  
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
    
//         int i=s-1;
//     int j=s;
//     int pivot=arr[e];
//    for( ;j<=e-1; ){
//     if(arr[j]<pivot){
//         i=i+1;
//         swap(arr[i],arr[j]);
//     }
//     j=j+1;
//    }
//    swap(arr[i+1],arr[e]);
//    return i+1;
// }
// // int partition(int arr[],int s,int e){
// //     int i=s-1;
// //     int j=s;
// //     int pivot=arr[e];
// //     for( ;j<=e-1; ){
// //         if(arr[j]<pivot){
// //             i=i+1;
// //             swap(arr[i],arr[j]);
// //         }
// //         j=j+1;
// //     }
// //     swap(arr[i+1],arr[e]);
// //     return i+1;
// // }
// void quicksort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p=partition(arr,s,e);
//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);
// }
// void merge(int arr[],int s,int mid,int e){
//     int i=s;
//     int j=mid+1;
//     int k=s;
//     int temp[100];
//     while(i<=mid && j<=e){
//         if(arr[i]<arr[j]){
//             temp[k]=arr[i];
//             k++;
//             i++;
//         }
//         else{
//             temp[k]=arr[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp[k]=arr[i];
//         i++;
//         k++;
//     }
//     while(j<=e){
//         temp[k]=arr[j];
//         j++;
//         k++;
//     }
//     for(int i=s;i<=e;i++){
//         arr[i]=temp[i];
//     }
// }
// void mergesort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(e+s)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,mid,e);

// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //quicksort(arr,0,n-1);
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
        int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,key;
    for(int i=0;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
             j=j-1;
        }
        arr[j+1]=key;
    }
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}

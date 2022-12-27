// #include<bits/stdc++.h>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int i=s-1;
//     int j=s;
//     int pivot=arr[e];
//     for( ;j<=e-1;){
//        if(arr[j]<=pivot){
//         i=i+1;
//         swap(arr[i],arr[j]);
//        }
//        j=j+1;
//     }
//     swap(arr[i+1],arr[e]);
//     return i+1;
// }
// void quicksort(int arr[],int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p=partition(arr,s,e);
//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);

// }
// int main(){
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     quicksort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int i=s-1;
    int j=s;
    int pivot=arr[e];
    for( ;j<=e-1; ){
        if(arr[j]<pivot){
            i=i+1;
            swap(arr[i],arr[j]);
        }
        j=j+1;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //cout<<"hello";
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}
void merge(int arr[],int s,int mid,int e){
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=e){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=0;i<=e;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;

    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // quicksort(arr,0,n-1);
   mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[], int s, int mid, int e)
// {
//     int i = s;
//     int j = mid + 1;
//     int k = s;
//     int temp[100];
//     while (i <= mid && j <= e)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }
//     while (j <= e)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }
//     for (int i = s; i <=e; i++)
//     {
//         arr[i] = temp[i];
//     }
// }
// void mergesort(int arr[], int n, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;
//     mergesort(arr, n, s, mid);
//     mergesort(arr, n, mid + 1, e);
//     merge(arr, s, mid, e);
// }
// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int s = 0;
//     int e = n - 1;
//     mergesort(arr, n, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;
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
            j++;
            k++;
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
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[],int n,int s,int e){
    
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,n,s,mid);
    mergesort(arr,n,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
     int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s=0;
    int e=n-1;
    mergesort(arr,n,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

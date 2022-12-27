// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {23, 45, 2, 6, 4, 78, 12};
//     int n = 7;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<",";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }



// max sum
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[] = {-4,1,3,-2,6,2,-1,-4,-7};
//     int n = 7;
   
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//              int count=0;
//             for(int k=i;k<=j;k++){
//                 count+=arr[k];
//                 if(count>max){
//                     max=count;
//                 }
//             }
//             cout<<endl;
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

// //max sum 2
//  #include<iostream>

// using namespace std;
// int main()
// {
//     int arr[1000];
//     int cumsum[1000]={0};
//     int n;
//      cin>>n;
  
   
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         cumsum[i]=cumsum[i-1]+arr[i];
//     }
//     int maxsum=0;
//     int currentsum=0;
    
   
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//            currentsum=0;
//            currentsum=arr[j]-arr[i-1];
            
//                 if(currentsum>maxsum){
//                     maxsum=currentsum;
//                 }
            
//             cout<<endl;
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }
// max sum 3
#include<iostream>

#include<climits>
using namespace std;
int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = 9;
    int cs=0;
    int ms=0;
   
    
    for(int i=0;i<n;i++){
       cs=cs+arr[i];
       if(cs<0){
        cs=0;
       }
       ms=max(cs,ms);
    }
    cout<<ms<<endl;
    return 0;
}
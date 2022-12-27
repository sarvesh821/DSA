// #include<iostream>
// using namespace std;
// int main(){
// int arr[100];
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// // n++;
// //insertion at head
// // for(int i=n;i>=0;i--){
// //     arr[i]=arr[i-1];
// // }
// //insertion at mid
// // int pos;
// // cin>>pos;
// // for(int i=n;i>=pos;i--){
// // arr[i]=arr[i-1];
// // }
// // arr[pos-1]=34;
//  //arr[0]=34;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// }
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    n++;
    //insertion at mid
    // int pos;
    // cin >> pos;
    // for (int i = n; i >= pos; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[pos - 1] = 34;




    // //insertion at head
    // for(int i=n;i>=0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=34;



    //insertion at tail
    arr[n-1]=34;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
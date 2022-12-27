
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a,int b){
    return a>b;
}
int main()
{ int arr[] = {23, 45, 2, 6, 4, 78, 12};
    int n = 7;
   sort(arr,arr+n,comp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
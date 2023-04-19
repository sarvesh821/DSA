#include <bits/stdc++.h>
using namespace std;
int join_ropes(int arr[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
    int cost = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int newrope = (a + b);
        cost += newrope;
        pq.push(newrope);
    }
    return cost;
}
int main()
{
    int arr[] = {4, 3, 2, 6};
    cout << join_ropes(arr, 4) << endl;
    return 0;
}
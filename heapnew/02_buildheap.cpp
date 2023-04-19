#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v, int idx, int size)
{
    int left = 2 * idx;
    int right = left + 1;
    int maxheap = idx;
    int last = size - 1;
    if (left <= last && v[left] > v[idx])
    {
        maxheap = left;
    }
    if (right <= last && v[right] > v[maxheap])
    {
        maxheap = right;
    }
    if (maxheap != idx)
    {
        swap(v[maxheap], v[idx]);
        heapify(v, maxheap, size);
    }
}
void buildheap(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int idx = i;
        int parent = i / 2;
        while (idx > 0 && v[idx] > v[parent])
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }
}
void buildoptimizedheap(vector<int> &v)
{
    for (int i = (v.size() - 1) / 2; i >= 1; i--)
    {
        heapify(v, i, v.size());
    }
}
void heapsort(vector<int> &v)
{
    buildoptimizedheap(v);
    int n = v.size();
    while (n > 1)
    {
        swap(v[1], v[n - 1]);

        n--;
        heapify(v, 1, n);
    }
}
int main()
{
    vector<int> v;
    v.push_back(-1);
    // buildoptimizedheap(v);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int np;
        cin >> np;
        v.push_back(np);
    }
    heapsort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
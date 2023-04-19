#include <bits/stdc++.h>
using namespace std;
class heap
{
    vector<int> v;
    bool minheap;
    bool compare(int a, int b)
    {
        if (minheap)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }
    void heapify(int idx)
    {
        int left = 2 * idx;
        int right = left + 1;
        int minidx = idx;
        int last = v.size() - 1;
        if (left <= last && compare(v[left], v[idx]))
        {
            minidx = left;
        }
        if (right <= last && compare(v[right], v[minidx]))
        {
            minidx = right;
        }
        if (minidx != idx)
        {

            swap(v[idx], v[minidx]);
            heapify(minidx);
        }
    }

public:
    heap(int default_size = 10, bool type = true)
    {
        v.reserve(default_size);
        v.push_back(-1);
        minheap = type;
    }
    void push(int d)
    {
        v.push_back(d);
        int idx = v.size() - 1;
        int parent = idx / 2;
        while (idx > 1 && compare(v[idx], v[parent]))
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }
    int top()
    {
        return v[1];
    }
    void pop()
    {
        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1);
    }
    bool empty()
    {
        return v.size() == 1;
    }
};
int main()
{
    heap h;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        h.push(no);
    }

    while (!h.empty())
    {
        cout << h.top() << " ";
        h.pop();
    }

    return 0;
}
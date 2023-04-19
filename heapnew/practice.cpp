// #include <bits/stdc++.h>
// using namespace std;
// class heap
// {
//     vector<int> v;
//     bool minheap;
//     bool compare(int a, int b)
//     {
//         if (minheap)
//         {
//             return a < b;
//         }
//         else
//         {
//             return a > b;
//         }
//     }
//     void heapify(int idx)
//     {
//         int left = 2 * idx;
//         int right = left + 1;
//         int minidx = idx;
//         int last = v.size() - 1;
//         if (left <= last && compare(v[left], v[idx]))
//         {
//             minidx = left;
//         }
//         if (right <= last && compare(v[idx], v[minidx]))
//         {
//             minidx = right;
//         }
//         if (minidx != idx)
//         {
//             swap(v[idx], v[minidx]);
//             heapify(minidx);
//         }
//     }

// public:
//     heap(int default_size = 10, bool type = true)
//     {
//         v.reserve(default_size);
//         v.push_back(-1);
//         minheap = type;
//     }
//     void push(int data)
//     {
//         v.push_back(data);
//         int idx = v.size() - 1;
//         int parent = idx / 2;
//         while (idx > 1 && compare(v[idx], v[parent]))
//         {
//             swap(v[idx], v[parent]);
//             idx = parent;
//             parent = parent / 2;
//         }
//     }
//     int top()
//     {
//         return v[1];
//     }
//     void pop()
//     {
//         swap(v[1], v[v.size() - 1]);
//         v.pop_back();
//         heapify(1);
//     }
//     bool empty()
//     {
//         return v.size() == 1;
//     }
// };
// int main()
// {
//     heap h;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int no;
//         cin >> no;
//         h.push(no);
//     }
//     while (!h.empty())
//     {
//         cout << h.top() << " ";
//         h.pop();
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// typedef pair<int, pair<int, int>> node;
// vector<int> mergeksortedarr(vector<vector<int>> arr)
// {
//     vector<int> res;
//     priority_queue<node, vector<node>, greater<node>> pq;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         pq.push({arr[i][0], {i, 0}});
//     }
//     while (!pq.empty())
//     {
//         node curr = pq.top();
//         pq.pop();
//         int ele = curr.first;
//         int x = curr.second.first;
//         int y = curr.second.second;
//         res.push_back(ele);
//         if (y + 1 < arr[x].size())
//         {
//             pq.push({arr[x][y + 1], {x, y + 1}});
//         }
//     }
//     return res;
// }
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<vector<int>> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < k; j++)
//         {
//             int no;
//             cin >> no;

//             arr[i].push_back(no);
//         }
//     }
//     vector<int> ans = mergeksortedarr(arr);
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     for (int j = 0; j < arr[i].size(); j++)
//     //     {
//     //         cout << arr[i][j] << " ";
//     //     }
//     // }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> leftheap;
        priority_queue<int, vector<int>, greater<int>> rightheap;
        int n;
        cin >> n;
        int i = 1;
        int data;
        cin >> data;
        leftheap.push(data);
        float med = data;
        cout << med << " ";
        cin >> data;
        while (i <= n)
        {
            if (leftheap.size() > rightheap.size())
            {
                if (data < med)
                {
                    rightheap.push(leftheap.top());
                    leftheap.pop();
                    leftheap.push(data);
                }
                else
                {
                    rightheap.push(data);
                }
                med = (leftheap.top() + rightheap.top()) / 2.0;
            }
            if (leftheap.size() == rightheap.size())
            {
                if (data < med)
                {
                    leftheap.push(data);
                    med = leftheap.top();
                }
                else
                {
                    rightheap.push(data);
                    med = rightheap.top();
                }
            }
            else
            {
                if (data > med)
                {
                    leftheap.push(rightheap.top());
                    rightheap.pop();
                    rightheap.push(data);
                }
                else
                {
                    leftheap.push(data);
                }
                med = (leftheap.top() + rightheap.top()) / 2.0;
            }
            cout << med << " ";
            cin >> data;
            i++;
        }
    }
    return 0;
}
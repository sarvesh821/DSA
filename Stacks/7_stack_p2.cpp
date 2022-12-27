#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        s1.push(ele);
    }
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
      
            int j = 1;
            while (j <= k)
            {
                if(!s1.empty()){
                     int ele1 = s1.top();
                s2.push(ele1);
                s1.pop();
               
                }
                j++;
            }
        

        if (!s1.empty())
        {
            s3.push(s1.top());
            s1.pop();
        }
    }
    while (!s3.empty())
    {
        cout << s3.top() << endl;
        s3.pop();
    }
    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n;
//     cin>>q;

//     stack<int> s1;
//     stack<int> s2;
//     stack<int> s3;

//     for (int i = 0; i < n; i++)
//     {
//         int tmp;
//         cin >> tmp;
//         s1.push(tmp);
//     }
// int k=s1.size();
//    for(int i=0;i<3;i++)
//     {
//         for (int i = 0; i < q; i++)
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         if(!s2.empty()){
//             s3.push(s1.top());
//         s1.pop();
//         }

//     }

//     while (!s3.empty())
//     {
//         cout << s3.top() << " ";
//         s3.pop();
//     }

//     while (!s2.empty())
//     {
//         cout << s2.top() << " ";
//         s2.pop();
//     }
//     return 0;
// }
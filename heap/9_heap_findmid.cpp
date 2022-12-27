#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> leftheap;
    priority_queue<int, vector<int>, greater<int>> rightheap;
    int d;
    cin >> d;
    leftheap.push(d);
    float mid = d;
    cout << "mid"<< ":" << mid << endl;
    cin >> d;
    while (d !=-1)
    {
        if (leftheap.size() > rightheap.size())
        {
            if (d < mid)
            {
                rightheap.push(leftheap.top());
                leftheap.pop();
                leftheap.push(d);
            }
            else
            {
                rightheap.push(d);
            }
            mid = (leftheap.top() + rightheap.top()) / 2.0;
        }
        else if (leftheap.size() == rightheap.size())
        {
            if (d < mid)
            {
                leftheap.push(d);
                  mid = leftheap.top();
            }
            else
            {
                rightheap.push(d);
                  mid = rightheap.top();
            }
          
        }

        else
        {
            if (d < mid)
            {
                leftheap.push(d);
            }
            else
            {
                leftheap.push(rightheap.top());
                rightheap.pop();
                rightheap.push(d);
            }
            mid = (leftheap.top() + rightheap.top()) / 2.0;
        }
        cout << "mid"
             << ":" << mid << endl;
        cin >> d;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class stacks
{
    vector<int> os;
    vector<int> mins;
    vector<int> maxs;

public:
    int top()
    {
        return os[os.size() - 1];
    }
    void push(int data)
    {
        if (os.size() == 0 and mins.size() == 0 && maxs.size() == 0)
        {
            os.push_back(data);
            mins.push_back(data);
            maxs.push_back(data);
        }
        else
        {
            os.push_back(data);
            if (mins[mins.size() - 1] > data)
            {
                mins.push_back(data);
            }
            else
            {
                mins.push_back(mins[mins.size() - 1]);
            }
            if (maxs[maxs.size() - 1] < data)
            {
                maxs.push_back(data);
            }
            else
            {
                maxs.push_back(maxs[maxs.size() - 1]);
            }
        }
    }
    void pop()
    {
        os.pop_back();
    }
    int getmin()
    {
        return mins[mins.size() - 1];
    }
    int getmax()
    {
        return maxs[maxs.size() - 1];
    }
};
int main()
{
    stacks q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }
    cout << q.getmin() << endl;
    cout << q.getmax() << endl;
    cout << q.top() << endl;
    return 0;
}
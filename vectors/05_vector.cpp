#include <iostream>
using namespace std;
template<typename t>
class vector
{
    int currentsize;
    int maxsize;

    t *arr;

public:
    vector()
    {
        currentsize = 0;
        maxsize = 1;
        arr = new t[maxsize];
    }
    void push_back(int d)
    {
        if (currentsize == maxsize)
        {
            t *oldarr = arr;
            arr = new t[2 * maxsize];
            maxsize = 2 * maxsize;
            for (int i = 0; i < currentsize; i++)
            {
                arr[i] = oldarr[i];
            }
            delete[] oldarr;
        }
        arr[currentsize] = d;
        currentsize++;
    }
    void pop_back()
    {
        currentsize--;
    }
    t front()
    {
        return arr[0];
    }
    t back()
    {
        return arr[currentsize - 1];
    }
    bool empty()
    {
        return currentsize == 0;
    }
    int capacity()
    {
        return maxsize;
    }
    t at(const int i)
    {
        return arr[i];
    }
    int size() const
    {
        return currentsize;
    }
    t operator[](const int i)
    {
        return arr[i];
    }
};
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout << v.size() << endl;
    cout << v[0] << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
class vector
{
    int currentsize;
    int maxsize;
    int ts;
    int *arr;

public:
    vector()
    {
        currentsize = 0;
        maxsize = 1;
        arr = new int[maxsize];
    }
    void push_back(int d)
    {
        if (currentsize == maxsize)
        {
            int *oldarr = arr;
            arr = new int[2 * ts];
            ts = 2 * ts;
            for (int i = 0; i < currentsize; i++)
            {
                arr[i] == oldarr[i];
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
    int front()
    {
        return arr[0];
    }
    int back()
    {
        return arr[currentsize - 1];
    }
    bool empty()
    {
        return currentsize == 0;
    }
    int capacity()
    {
        return ts;
    }
    int at(const int i)
    {
        return arr[i];
    }
    // int operator[](const int i)
    // {
    //     return arr[i];
    // }
};
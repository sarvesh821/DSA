#include <bits/stdc++.h>
using namespace std;
template <typename t>

class node
{
    string key;
    t value;
    node<t> *next;
    node(string key, t val)
    {
        this->key = key;
        value = val;
        next = NULL;
    }
    ~node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
template <typename t>
class hashtable
{
    node<t> **table;
    int curr_size;
    int table_size;
    int hashfn(string key)
    {
        int idx = 0;
        int p = 1;
        for (int i = 0; i < key.length(); i++)
        {
            idx = idx + (key[i] * p) % table_size;
            idx = idx % table_size;
            p = (p * 27) % table_size;
        }
    }
    void rehash()
    {
        node<t> **oldtable = table;
        int oldtable_size = table_size;
        table_size = 2 * table_size;
        table = new node<t> *[table_size];
        for (int i = 0; i < table_size; i++)
        {
            table[i] = NULL;
        }
        for (int i = 0; i < oldtable_size; i++)
        {
            node<t> *temp = oldtable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->value);
                temp = temp->next;
            }
            if (oldtable[i] != NULL)
            {
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }

public:
    hashtable(int ts = 7)
    {
        table_size = ts;
        curr_size = 0;
        table = new node<t> *[table_size];
        for (int i = 0; i < table_size; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, t value)
    {
        int idx = hashfn(key);
        node<t> *n = new node<t>(key, value);
        n->next = table[idx];
        table[idx] = n;
        curr_size++;
        float loadfactor = curr_size / (1.0 * table_size);
        if (loadfactor > 0.7)
        {
            rehash();
        }
    }
    void print()
    {
        for (int i = 0; i < table_size; i++)
        {
            cout << "bucket " << i << "->";
            node<t> *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << "->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
    
};
int main()
{
    return 0;
}
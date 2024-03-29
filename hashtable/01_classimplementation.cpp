#include <bits/stdc++.h>
using namespace std;
template <typename t>
class node
{
public:
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
        for (int j = 0; j < key.length(); j++)
        {
            idx = idx + (key[j] * p) % table_size;
            idx = idx % table_size;
            p = (p * 27) % table_size;
        }
        return idx;
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
        curr_size = 0;
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
        table = new node<t> *[table_size];
        curr_size = 0;
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
        float load_factor = curr_size / (1.0 * table_size);
        if (load_factor > 0.7)
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
            cout << endl;
        }
    }
    t *search(string key)
    {
        int idx = hashfn(key);
        node<t> *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }
    t &operator[](string key)
    {
        t *f = search(key);
        if (f == NULL)
        {
            t garbage;
            insert(key, garbage);
            f = search(key);
        }
        return *f;
    }
    void erase()
    {
    }
};

int main()
{
    hashtable<int> price_menue;
    price_menue.insert("burger", 120);
    price_menue.insert("pepsi", 60);
    price_menue.insert("burgerpizza", 170);
    price_menue.insert("browni", 234);
    price_menue.insert("cake", 345);
    // price_menue.print();
    int *price = price_menue.search("orange");
    if (price == NULL)
    {
        cout << "not found";
    }
    else
    {
        cout << "price is " << *price;
    }
    cout << endl;
    price_menue["dosa"] = 60;
    cout << "price of dosa -> ";
    cout << price_menue["dosa"] << endl;
    price_menue["dosa"] += 10;

    return 0;
}
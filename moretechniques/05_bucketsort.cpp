#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int marks;
    string  names;
};
void bucketsort(student arr[], int n)
{
    vector<student> v[101];
    for (int i = 0; i < n; i++)
    {
        int m = arr[i].marks;
        v[m].push_back(arr[i]);
    }
    for (int i = 100; i >= 0; i--)
    {
        for (vector<student>::iterator it = v[i].begin(); it != v[i].end(); it++)
        {
            cout << (*it).marks << " " << (*it).names << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    student s[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].marks >> s[i].names;
    }
    bucketsort(s, n);
    return 0;
}
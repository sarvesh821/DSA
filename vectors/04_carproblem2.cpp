#include <bits/stdc++.h>
using namespace std;
class car
{
public:
    string carname;
    int x;
    int y;
    car()
    {
    }
    car(string n, int x, int y)
    {
        carname = n;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
};
bool compare(car a, car b)
{
    int da = a.dist();
    int db = b.dist();
    if (da == db)
    {
        a.carname.length() < b.carname.length();
    }
    return da < db;
}

int main()
{
    vector<car> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int x, y;
        cin >> name >> x >> y;
        car temp(name, x, y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);
    for (auto x : v)
    {
        cout << x.carname << "," << x.dist() << "," << x.x << "," << x.y << endl;
    }

    return 0;
}
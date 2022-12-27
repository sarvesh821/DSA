#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s1;
    s1.push(45);
    s1.push(67);
    s1.push(78);
    s1.push(86);
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    cout << s1.empty() << endl;

    return 0;
}
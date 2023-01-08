#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << arr << endl;
    char a[] = {'a', 'b', 'c', 'd', '\0'};
    cout << a << endl;
    // take input
    char ch[10];
    cin >> ch;
    cout << ch << endl;
    // if we does not terminate char array it will give some garbage value;
    char s1[] = {
        'h',
        'e',
        'l',
        'l',
        'o',
    };
    char s2[] = "hello";
    cout << s1 << " " << sizeof(s1) << endl;
    cout << s2 << " " << sizeof(s2) << endl;
    return 0;
}
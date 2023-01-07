#include <iostream>
using namespace std;
int main()
{
    // char arr[][10] = {{'a', 'b', '\0'}, {'d', 'e', 'f', '\0'}};
    char arr[][10] = {"ab", "def", "ghi"};
    cout << arr[0] << endl;
    cout << arr[2] << endl;
    return 0;
}
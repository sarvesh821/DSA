#include <iostream>
using namespace std;
int main()
{
    int arr[5][4]{0};
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
// cin.get used to read single character
// put a loop to read sentences till we get new line '\n';
void readline(char ch[], int maxlen, char delim = '\n')
{
    int i = 0;
    char chr = cin.get();
    while (chr != delim)
    {
        ch[i] = chr;
        i++;
        if (i == maxlen - 1)
        {
            break;
        }
        chr = cin.get();
    }
    ch[i] = '\0';
    return;
}
int main()
{
    char ch[1000];
    // this readline function is already provided
    cin.getline(ch, 1000, '$');
    // readline(ch, 1000);
    cout << ch;

    return 0;
}
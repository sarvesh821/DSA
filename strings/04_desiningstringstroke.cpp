#include <bits/stdc++.h>
using namespace std;
char *mystrtok(char *ch, char delim)
{
    static char *input = NULL;
    if (ch != NULL)
    {
        input = ch;
    }
    if (input == NULL)
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    output = '\0';
    input = NULL;
}
int main()
{
    char ch[] = "this is a rainy day";
    char *ptr = mystrtok(ch, ' ');
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }
    return 0;
}
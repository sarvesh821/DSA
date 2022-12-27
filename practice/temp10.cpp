#include <bits/stdc++.h>
using namespace std;
bool isvalidpara(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch=expression[i];
        if (ch=='(' or ch=='{' or ch=='[')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top=s.top();
                if (ch==')' and top=='(' ||
                ch=='}' and top=='{' ||
                ch==']' and top=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }   
            }
            else
            {
                return false;
            }   
        }   
    }

     if(s.empty())
        return true;
    else
        return false;
    
}
int main()
{
    string expr = "[{()}])";
    if (isvalidpara(expr))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }
        
    return 0;
}
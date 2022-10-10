#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;

    while (true)
    {
        getline(cin, str);
        if (str == ".")
        {
            break;
        }
        stack<string> s;
        for (int i = 0; i < str.length(); i++)
        {

            if (str[i] == '(')
            {
                s.push("(");
            }
            else if (str[i] == '[')
            {
                s.push("[");
            }
            else if (str[i] == ')')
            {
                if (s.empty())
                {
                    cout << "no\n";
                    break;
                }

                if (s.top() == "(")
                {
                    s.pop();
                }
                else
                {
                    cout << "no\n";
                    break;
                }
            }
            else if (str[i] == ']')
            {
                if (s.empty())
                {
                    cout << "no\n";
                    break;
                }
                if (s.top() == "[")
                {
                    s.pop();
                }
                else
                {
                    cout << "no\n";
                    break;
                }
            }

            if (i == str.length() - 1)
            {
                if (s.empty())
                {
                    cout << "yes\n";
                }
                else
                {
                    cout << "no\n";
                }
            }
        }
    }

    return 0;
}

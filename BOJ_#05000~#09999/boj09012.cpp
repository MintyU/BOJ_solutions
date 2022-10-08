#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string PS;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<int> s;
        cin >> PS;
        for (int j = 0; j < PS.length(); j++)
        {
            if (PS[j] == '(')
            {
                s.push(1);
            }
            else
            {
                if (s.empty())
                {
                    cout << "NO\n";
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            if (j == PS.length() - 1)
            {
                if (s.empty())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
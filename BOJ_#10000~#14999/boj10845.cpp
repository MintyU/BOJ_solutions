#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int n;
    string command;
    int num;
    queue<int> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> num;
            ans.push(num);
        }
        else if (command == "pop")
        {
            if (!ans.empty())
            {
                cout << ans.front() << endl;
                ans.pop();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (command == "size")
        {
            cout << ans.size() << endl;
        }
        else if (command == "empty")
        {
            if (ans.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (command == "front")
        {
            if (!ans.empty())
            {
                cout << ans.front() << endl;
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (command == "back")
        {
            if (!ans.empty())
            {
                cout << ans.back() << endl;
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    deque<int> dq;
    int n, a;
    cin >> n;
    string command;
    for (int i = 0; i < n; i++)
    {
        cin >> command;
        if (command == "push_front")
        {
            cin >> a;
            dq.push_front(a);
        }
        else if (command == "push_back")
        {
            cin >> a;
            dq.push_back(a);
        }
        else if (command == "pop_front")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                a = dq.front();
                dq.pop_front();
                cout << a << "\n";
            }
        }
        else if (command == "pop_back")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                a = dq.back();
                dq.pop_back();
                cout << a << "\n";
            }
        }
        else if (command == "size")
        {
            cout << dq.size() << "\n";
        }
        else if (command == "empty")
        {
            if (dq.empty())
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
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << "\n";
            }
        }
        else if (command == "back")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.back() << "\n";
            }
        }
    }

    return 0;
}
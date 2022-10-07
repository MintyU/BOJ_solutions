#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int a;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        a = q.front();
        q.pop();
        if (q.empty())
        {
            cout << a;
            break;
        }
        a = q.front();
        q.pop();
        q.push(a);
    }

    return 0;
}
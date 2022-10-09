#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<int> q;
    int ans, temp;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout << "<";
    while (!q.empty())
    {
        for (int i = 0; i < m - 1; i++)
        {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        temp = q.front();
        q.pop();
        cout << temp;
        if (!q.empty())
        {
            cout << ", ";
        }
    }
    cout << ">";

    return 0;
}
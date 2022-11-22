#include <iostream>
#include <queue>

using namespace std;

struct num
{
    long long n;
    int cnt;
};

int bfs(long long a, long long b)
{
    queue<num> q;
    num temp;
    q.push({a, 1});

    while (!q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp.n == b)
        {
            return temp.cnt;
        }

        if (temp.n * 10 + 1 <= b)
        {
            q.push({temp.n * 10 + 1, temp.cnt + 1});
        }
        if (temp.n * 1 <= b)
        {
            q.push({temp.n * 2, temp.cnt + 1});
        }
    }

    return -1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int n = bfs(a, b);
    cout << n;
    return 0;
}
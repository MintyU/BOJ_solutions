#include <iostream>
#include <queue>
using namespace std;

int BFS(int n, int k);

int main()
{
    int N, K;
    cin >> N >> K;
    int ans = BFS(N, K);
    cout << ans;

    return 0;
}

int BFS(int n, int k)
{
    queue<int> q;
    int x;
    int map[100001] = {0};
    q.push(n);

    while (!q.empty())
    {
        x = q.front();
        q.pop();

        if (x == k)
        {
            return map[x];
        }
        if (x + 1 <= 100000)
        {
            if (map[x + 1] == 0)
            {
                map[x + 1] = map[x] + 1;
                q.push(x + 1);
            }
        }
        if (x - 1 >= 0)
        {
            if (map[x - 1] == 0)
            {
                map[x - 1] = map[x] + 1;
                q.push(x - 1);
            }
        }
        if (2 * x <= 100000)
        {
            if (map[2 * x] == 0)
            {
                map[2 * x] = map[x] + 1;
                q.push(2 * x);
            }
        }
    }
    return -1;
}
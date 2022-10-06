#include <iostream>
#include <queue>
using namespace std;

struct tomato
{
    int x, y;
};

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int BFS(int box[][1002], int m, int n);

int main()
{
    int box[1002][1002] = {-1};
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> box[i][j];
        }
    }
    int ans = BFS(box, m, n);
    cout << ans;
    return 0;
}

int BFS(int box[1002][1002], int m, int n)
{
    int x, y;
    queue<tomato> q;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (box[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    while (!q.empty())
    {
        x = q.front().x, y = q.front().y;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            if (x + dx[i] < 1 || y + dy[i] < 1)
            {
                continue;
            }

            if (box[x + dx[i]][y + dy[i]] == 0 && x + dx[i] <= n && y + dy[i] <= m)
            {
                box[x + dx[i]][y + dy[i]] = box[x][y] + 1;
                q.push({x + dx[i], y + dy[i]});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (box[i][j] == 0)
            {
                return -1;
            }
            if (box[i][j] > ans)
            {
                ans = box[i][j];
            }
        }
    }
    return ans - 1;
}
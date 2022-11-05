#include <iostream>
#include <queue>
#include <iostream>
using namespace std;

struct state
{
    int x;
    int y;
    int b;
};
int arr[1001][1001] = {0};
int visited[1001][1001][2] = {0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string s;
    queue<state> q;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    q.push({0, 0, 0});
    visited[0][0][0] = 1;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    int x, y;
    int isbreak;

    while (!q.empty())
    {
        x = q.front().x;
        y = q.front().y;
        isbreak = q.front().b;
        q.pop();
        if (x == n - 1 && y == m - 1)
        {
            cout << visited[x][y][isbreak];
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            if (x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 || y + dy[i] >= m)
            {
                continue;
            }
            if (arr[x + dx[i]][y + dy[i]] == 0 && visited[x + dx[i]][y + dy[i]][isbreak] == 0)
            {
                q.push({x + dx[i], y + dy[i], isbreak});
                visited[x + dx[i]][y + dy[i]][isbreak] = visited[x][y][isbreak] + 1;
            }
            else if (arr[x + dx[i]][y + dy[i]] == 1 && isbreak == 0 && visited[x + dx[i]][y + dy[i]][isbreak] == 0)
            {
                q.push({x + dx[i], y + dy[i], 1});
                visited[x + dx[i]][y + dy[i]][1] = visited[x][y][isbreak] + 1;
            }
        }
    }
    cout << -1;

    return 0;
}

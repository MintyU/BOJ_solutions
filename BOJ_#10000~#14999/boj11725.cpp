#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n, x, y;
    vector<int> adj[100001];
    cin >> n;
    bool visit[100001] = {0};
    int parent[100001] = {0};
    queue<int> q;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    q.push(1);
    visit[1] = true;

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (int i = 0; i < adj[temp].size(); i++)
        {
            int next = adj[temp][i];
            if (!visit[next])
            {
                visit[next] = true;
                q.push(next);
                parent[next] = temp;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << parent[i] << "\n";
    }

    return 0;
}
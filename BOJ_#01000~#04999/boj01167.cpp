#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct node
{
    int n, w;
};

vector<node> adj[100001];

node dfs(int n, int w)
{
    bool visited[100001] = {0};
    stack<node> s;
    s.push({n, w});
    node temp;
    node max_node = {0, 0};

    while (!s.empty())
    {
        temp = s.top();
        s.pop();
        visited[temp.n] = true;

        for (int i = 0; i < adj[temp.n].size(); i++)
        {
            if (!visited[adj[temp.n][i].n])
            {
                s.push({adj[temp.n][i].n, adj[temp.n][i].w + temp.w});
                if (max_node.w < adj[temp.n][i].w + temp.w)
                {
                    max_node.n = adj[temp.n][i].n;
                    max_node.w = adj[temp.n][i].w + temp.w;
                }
            }
        }
    }

    return max_node;
}

int solve()
{
    node ans;
    ans = dfs(1, 0);
    ans = dfs(ans.n, 0);
    return ans.w;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int parent, child, weight;
    for (int i = 0; i < n; i++)
    {
        cin >> parent;
        while (true)
        {
            cin >> child;
            if (child == -1)
            {
                break;
            }
            cin >> weight;
            adj[parent].push_back({child, weight});
        }
    }

    n = solve();
    cout << n;

    return 0;
}
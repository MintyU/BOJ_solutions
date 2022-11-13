#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct node
{
    int n, w;
};

vector<node> adj[10001];

node dfs(int n, int w)
{
    bool visited[10001] = {0};
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
    int n;
    cin >> n;
    int parent, child, weight;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> parent >> child >> weight;
        adj[parent].push_back({child, weight});
        adj[child].push_back({parent, weight});
    }
    n = solve();
    cout << n;

    return 0;
}
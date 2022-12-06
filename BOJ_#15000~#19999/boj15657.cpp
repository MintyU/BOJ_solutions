#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9] = {0};
int ans[9] = {0};
bool visited[9] = {0};

void DFS(int len, int cur)
{
    if (len == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[ans[i]] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = cur; i < n; i++)
    {
        ans[len] = i;
        DFS(len + 1, i);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    DFS(0, 0);

    return 0;
}
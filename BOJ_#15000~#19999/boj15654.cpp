#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[9] = {0};
int ans[9] = {0};
bool visited[9] = {0};

void DFS(int len)
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
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            ans[len] = i;
            DFS(len + 1);
            visited[i] = false;
        }
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
    DFS(0);

    return 0;
}
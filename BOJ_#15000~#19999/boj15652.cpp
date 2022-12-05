#include <iostream>
using namespace std;

int n, m;
int arr[9] = {0};

void DFS(int len, int num)
{
    if (len == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = num; i <= n; i++)
    {
        arr[len] = i;
        DFS(len + 1, i);
    }
}

int main()
{
    cin >> n >> m;
    DFS(0, 1);
    return 0;
}
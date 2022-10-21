#include <iostream>
using namespace std;

int n, m;
int arr[9] = {0};

void print();
bool promising(int n);
void DFS(int depth);

int main()
{
    cin >> n >> m;

    DFS(0);
    return 0;
}

void print()
{
    for (int i = 1; i <= m; i++)
    {
        cout << arr[i];
        if (i != m)
        {
            cout << " ";
        }
    }
    cout << "\n";
}

bool promising(int n)
{
    if (arr[n - 1] >= arr[n])
    {
        return false;
    }

    return true;
}

void DFS(int depth)
{
    if (depth == m)
    {
        print();
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            arr[depth + 1] = i;
            if (promising(depth + 1))
            {
                DFS(depth + 1);
            }
        }
    }
}
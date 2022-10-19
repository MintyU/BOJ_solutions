#include <iostream>
#include <cstdlib>
using namespace std;

bool promising(int n);

void nqueen(int depth);

int cnt = 0;
int n;
int arr[15] = {0};

int main()
{
    cin >> n;

    nqueen(0);
    cout << cnt;

    return 0;
}

bool promising(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[n] == arr[i] || abs(n - i) == abs(arr[n] - arr[i]))
        {
            return false;
        }
    }
    return true;
}

void nqueen(int depth)
{
    if (depth == n)
    {
        cnt++;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            arr[depth + 1] = i;
            if (promising(depth + 1))
            {
                nqueen(depth + 1);
            }
        }
    }
}
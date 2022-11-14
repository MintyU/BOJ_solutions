#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n[3];
    cin >> n[0] >> n[1] >> n[2];
    sort(n, n + 3);
    if (n[2] * n[2] == n[0] * n[0] + n[1] * n[1])
    {
        cout << 1;
    }
    else if (n[0] == n[1] && n[1] == n[2])
    {
        cout << 2;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
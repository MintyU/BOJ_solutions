#include <iostream>
using namespace std;

int main()
{
    int total;
    cin >> total;
    int n, a, b;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans = ans + a * b;
    }
    if (ans == total)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
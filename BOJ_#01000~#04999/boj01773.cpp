#include <iostream>
using namespace std;

int main()
{
    int n, c;
    int ans = 0;
    cin >> n >> c;
    int a[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= c; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}
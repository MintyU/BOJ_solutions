#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int h[1000];
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    sort(h, h + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ans += h[j];
        }
    }
    cout << ans;

    return 0;
}
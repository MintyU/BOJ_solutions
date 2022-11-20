#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin >> n;
    cin >> s;
    int coffee = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans++;
            coffee = 2;
        }
        else
        {
            if (coffee != 0)
            {
                ans++;
                coffee--;
            }
        }
    }
    cout << ans;

    return 0;
}
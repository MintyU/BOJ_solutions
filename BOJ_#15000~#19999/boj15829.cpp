#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int l;
    string s;
    cin >> l;
    cin >> s;
    long long ans = 0;

    for (int i = 0; i < l; i++)
    {
        long long temp = int(s[i]) - 96;
        for (int j = 0; j < i; j++)
        {
            temp = (temp % 1234567891) * (31 % 1234567891);
        }
        ans += temp % 1234567891;
    }
    cout << ans % 1234567891;
    return 0;
}
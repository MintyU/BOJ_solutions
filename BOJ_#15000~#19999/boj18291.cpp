#include <iostream>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b)
{
    ll res = 1;

    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % 1000000007ll;
        }

        a = (a * a) % 1000000007ll;
        b >>= 1;
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << binpow(2, a - 2) << "\n";
    }

    return 0;
}
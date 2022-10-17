#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int minsix = 1001, minone = 1001;
    int six, one;
    for (int i = 0; i < m; i++)
    {
        cin >> six >> one;
        minsix = minsix < six ? minsix : six;
        minone = minone < one ? minone : one;
    }
    if (minsix >= minone * 6)
    {
        cout << minone * n;
    }
    else
    {
        if ((n % 6) * minone < minsix)
        {
            cout << (n / 6) * minsix + (n % 6) * minone;
        }
        else
        {
            cout << ((n / 6) + 1) * minsix;
        }
    }

    return 0;
}
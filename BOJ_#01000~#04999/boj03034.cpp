#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y, a;
    cin >> n >> x >> y;
    double diag = sqrt(double(x * x + y * y));

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > diag)
        {
            cout << "NE\n";
        }
        else
        {
            cout << "DA\n";
        }
    }

    return 0;
}
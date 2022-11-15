#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    double length[3];

    length[0] = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    length[1] = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
    length[2] = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
    sort(length, length + 3);
    cout.precision(30);

    if (((xa - xb) * (yb - yc)) == ((xb - xc) * (ya - yb)))
    {
        cout << -1;
    }
    else
    {
        cout << 2 * (length[2] - length[0]);
    }

    return 0;
}
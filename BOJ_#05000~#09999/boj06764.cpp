#include <iostream>

using namespace std;

int main()
{
    int d[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> d[i];
    }
    if (d[0] > d[1] && d[1] > d[2] && d[2] > d[3])
        cout << "Fish Diving";
    else if (d[0] < d[1] && d[1] < d[2] && d[2] < d[3])
        cout << "Fish Rising";
    else if (d[0] == d[1] && d[1] == d[2] && d[2] == d[3])
        cout << "Fish At Constant Depth";
    else
        cout << "No Fish";

    return 0;
}
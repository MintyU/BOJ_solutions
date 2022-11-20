#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long l[6];
    long long pos[4][2];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> pos[j][k];
            }
        }
        l[0] = (pos[0][0] - pos[1][0]) * (pos[0][0] - pos[1][0]) + (pos[0][1] - pos[1][1]) * (pos[0][1] - pos[1][1]);
        l[1] = (pos[1][0] - pos[2][0]) * (pos[1][0] - pos[2][0]) + (pos[1][1] - pos[2][1]) * (pos[1][1] - pos[2][1]);
        l[2] = (pos[2][0] - pos[3][0]) * (pos[2][0] - pos[3][0]) + (pos[2][1] - pos[3][1]) * (pos[2][1] - pos[3][1]);
        l[3] = (pos[3][0] - pos[0][0]) * (pos[3][0] - pos[0][0]) + (pos[3][1] - pos[0][1]) * (pos[3][1] - pos[0][1]);
        l[4] = (pos[0][0] - pos[2][0]) * (pos[0][0] - pos[2][0]) + (pos[0][1] - pos[2][1]) * (pos[0][1] - pos[2][1]);
        l[5] = (pos[1][0] - pos[3][0]) * (pos[1][0] - pos[3][0]) + (pos[1][1] - pos[3][1]) * (pos[1][1] - pos[3][1]);
        sort(l, l + 6);
        if (l[0] == l[1] && l[1] == l[2] && l[2] == l[3] && l[3] != l[4] && l[4] == l[5])
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
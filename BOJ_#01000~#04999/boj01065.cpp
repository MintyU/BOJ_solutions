#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int c = 0;
    int numarr[4] = {};
    int len, diff, temp;
    bool flag = true;

    for (int i = 1; i <= num; i++)
    {
        temp = i;
        for (int j = 0; j < 4; j++)
        {
            numarr[j] = 0;
        }

        len = 0;
        flag = true;

        for (int j = 3; j >= 0; j--)
        {
            numarr[j] = temp % 10;
            temp /= 10;
            if (temp == 0)
            {
                len = 4 - j;
                break;
            }
        }

        diff = 0;
        for (int j = len - 1; j > 0; j--)
        {
            if (j == len - 1)
            {
                diff = numarr[3 - j] - numarr[4 - j];
            }
            if (numarr[3 - j] - numarr[4 - j] != diff)
            {
                flag = false;
            }
        }
        if (flag)
        {
            c++;
        }
    }
    cout << c;

    return 0;
}
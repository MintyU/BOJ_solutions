#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        cout << 1;
    }
    else if (a > 0 && b < 0)
    {
        cout << 4;
    }
    else if (a < 0 && b > 0)
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }
    return 0;
}
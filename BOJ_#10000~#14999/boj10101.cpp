#include <iostream>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if (a[0] == 60 && a[1] == 60 && a[2] == 60)
    {
        cout << "Equilateral";
    }
    else if (a[0] + a[1] + a[2] != 180)
    {
        cout << "Error";
    }
    else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
    {
        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, a, c = 0;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (n == a)
        {
            c++;
        }
    }
    cout << c;

    return 0;
}

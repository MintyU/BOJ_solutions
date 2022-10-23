#include <iostream>

using namespace std;

int main()
{
    int l, p;
    cin >> l >> p;
    int population = l * p;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        cout << n - population;
        if (i != 4)
        {
            cout << " ";
        }
    }
    return 0;
}
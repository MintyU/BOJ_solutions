#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c;
        cin >> b >> c;
        if (b >=12 && c >=4)
        {
            cout << 11*c+4 << endl;
        }
        else
        {
            cout << -1 <<endl;
        }
    }
    return 0;
}
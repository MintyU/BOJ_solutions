#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
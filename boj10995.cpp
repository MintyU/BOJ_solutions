#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*a; j++)
        {
            if ((j+i)%2 == 0)
            {
                cout << "*";
            }else
            {
                cout << " ";
            }
            
            
        }
        cout << endl;
    }
    
    return 0;
}
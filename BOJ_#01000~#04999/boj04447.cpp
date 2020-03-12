#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    char name[40];
    cin.ignore();
    for (int  i = 0; i < n; i++)
    {
        cin.getline(name, 40);
        int b = 0;
        int g = 0;
        for (int j = 0; j < strlen(name); j++)
        {
            if (name[j] == 'b' || name[j] == 'B')
            {
                b += 1;
            }else if (name[j] == 'g' || name[j] == 'G')
            {
                g += 1;
            }
        }
        if (b> g)
        {
            cout << name << " is A BADDY" << endl;
        }else if (g > b)
        {
            cout << name << " is GOOD" << endl;
        }else if (g == b)
        {
            cout << name << " is NEUTRAL" << endl;
        }
    }
    return 0; 
}
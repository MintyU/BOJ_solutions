#include <iostream>
#include <string>
using namespace std;

int alp[26] = {};

int main() {
    for (int i = 0; i < 27; i++)
    {
        alp[i] = -1;
    }
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a.substr(i, 1) == "a" && alp[0] == -1)
            alp[0] = i;
        else if (a.substr(i, 1) == "b" && alp[1] == -1)
            alp[1] = i;
        else if (a.substr(i, 1) == "c" && alp[2] == -1)
            alp[2] = i;
        else if (a.substr(i, 1) == "d" && alp[3] == -1)
            alp[3] = i;
        else if (a.substr(i, 1) == "e" && alp[4] == -1)
            alp[4] = i;
        else if (a.substr(i, 1) == "f" && alp[5] == -1)
            alp[5] = i;
        else if (a.substr(i, 1) == "g" && alp[6] == -1)
            alp[6] = i;
        else if (a.substr(i, 1) == "h" && alp[7] == -1)
            alp[7] = i;
        else if (a.substr(i, 1) == "i" && alp[8] == -1)
            alp[8] = i;
        else if (a.substr(i, 1) == "j" && alp[9] == -1)
            alp[9] = i;
        else if (a.substr(i, 1) == "k" && alp[10] == -1)
            alp[10] = i;
        else if (a.substr(i, 1) == "l" && alp[11] == -1)
            alp[11] = i;
        else if (a.substr(i, 1) == "m" && alp[12] == -1)
            alp[12] = i;
        else if (a.substr(i, 1) == "n" && alp[13] == -1)
            alp[13] = i;
        else if (a.substr(i, 1) == "o" && alp[14] == -1)
            alp[14] = i;
        else if (a.substr(i, 1) == "p" && alp[15] == -1)
            alp[15] = i;
        else if (a.substr(i, 1) == "q" && alp[16] == -1)
            alp[16] = i;
        else if (a.substr(i, 1) == "r" && alp[17] == -1)
            alp[17] = i;
        else if (a.substr(i, 1) == "s" && alp[18] == -1)
            alp[18] = i;
        else if (a.substr(i, 1) == "t" && alp[19] == -1)
            alp[19] = i;
        else if (a.substr(i, 1) == "u" && alp[20] == -1)
            alp[20] = i;
        else if (a.substr(i, 1) == "v" && alp[21] == -1)
            alp[21] = i;
        else if (a.substr(i, 1) == "w" && alp[22] == -1)
            alp[22] = i;
        else if (a.substr(i, 1) == "x" && alp[23] == -1)
            alp[23] = i;
        else if (a.substr(i, 1) == "y" && alp[24] == -1)
            alp[24] = i;
        else if (a.substr(i, 1) == "z" && alp[25] == -1)
            alp[25] = i;
        
        
    }
    for (int j = 0; j < 26; j++)
    {
        cout << alp[j] << " ";
    }
    

    return 0;
}
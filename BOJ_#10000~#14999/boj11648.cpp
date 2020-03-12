#include <iostream>
using namespace std;

int main() {
    int inputnum;
    cin >> inputnum;
    int numarr[9];
    int count = 0;
    
    while (inputnum/10 != 0)
    {
        int multi = 1;
        for (int i = 0; i < 9; i++)
        {
            numarr[i] = 1;
        }
        for (int j = 0; inputnum != 0; j++)
        {
            numarr[j] = inputnum % 10;
            inputnum /= 10;
        }
        for (int k = 0; k < 9; k++)
        {
            multi *= numarr[k];
        }
        inputnum = multi;
        count +=1;
    }
    cout << count;

    

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){ return a > b;}


int main() {
    int note[8];
    int note2[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> note[i];
        note2[i] = note[i];
    }
    sort(note, note + 8);
    if (equal(note, note + 8, note2))
    {
        cout << "ascending";
        return 0;
    }
    sort(note, note + 8, desc);
    if (equal(note, note + 8, note2))
    {
        cout << "descending";
        return 0;
    }
    cout << "mixed";
    
       
    return 0;
}
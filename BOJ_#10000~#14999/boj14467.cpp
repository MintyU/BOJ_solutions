#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int cow[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int cownum, pos;
        cin >> cownum >> pos;
        if (cow[cownum] == -1) {
            cow[cownum] = pos;

        }
        else if (cow[cownum] != pos && cow[cownum] != -1)
        {
            cow[cownum] = pos;
            count += 1;
        }
        
        
    }
    cout << count << endl;
    
    return 0;
}
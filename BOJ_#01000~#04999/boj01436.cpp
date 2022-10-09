#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int movie = 1;
    string temp;
    int cnt = 0;
    for (int i = 0; cnt < n; i++)
    {
        temp = to_string(movie);
        if (temp.find("666") != string::npos)
        {
            cnt++;
        }
        movie++;
    }
    cout << movie - 1;

    return 0;
}
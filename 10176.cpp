#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, len, number;
    char ch;
    while (cin >> ch)
    {
        number = 0;
        number += ch - 48;
        while (cin >> ch)
        {
            if (ch == '#')
                break;
            number = number * 2;
            number += ch - 48;
            number = number % 131071;
        }
        if (number == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

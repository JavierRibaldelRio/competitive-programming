#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

bool caso()
{

    string s;

    getline(cin, s);


    if (s.compare("FIN") == 0)
    {
        return false;
    }

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        char c = s.at(i);

        if (isalpha(c))
        {
            if (c != 'Z')
            {
                c = c + 1;
            }

            else
            {
                c = 'A';
            }
        }
        cout << c;
    }
    cout << "\n";

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
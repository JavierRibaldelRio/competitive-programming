#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

bool caso()
{

    string cadenaCesar;

    getline(cin, cadenaCesar);

    int cesarCode = 'p' - cadenaCesar.at(0);

    int vocales = 0;

    for (int i = 0; i < cadenaCesar.length(); i++)
    {

        if (isalpha(cadenaCesar.at(i)))
        {

            cadenaCesar[i] = cadenaCesar[i] + cesarCode;

            if ((cadenaCesar[i] > 90 && cadenaCesar[i] < 97) || cadenaCesar[i] > 122)
            {

                cadenaCesar[i] -= 26;
            }

            switch (tolower(cadenaCesar[i]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':

                vocales++;

                break;
            }
        }
    }

    if (cadenaCesar.compare("pFIN") == 0)
    {

        return false;
    }

    cout << vocales << "\n";

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}

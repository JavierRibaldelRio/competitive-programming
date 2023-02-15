#include <iostream>
#include <string>

using namespace std;

int extraerDigito(string s, unsigned int n)
{

    if (s.length() - 1 < n)
    {

        return 0;
    }
    else
    {
        return s.at(n) - '0';
    }
}

bool caso()
{

    string x, y;

    cin >> x >> y;

    if (x.compare(y) == 0 && y.compare("0") == 0)
    {
        return false;
    }

    int llevo = 0;

    int longi = (x.length() > y.length()) ? x.length() : y.length();

    int sumar = 0;

    for (int i = longi - 1; 0 <= i; i--)
    {

        if (extraerDigito(x, i) + sumar + extraerDigito(y, i) >= 10)
        {
            sumar = 1;
            llevo++;
        }
        else
        {
            sumar = 0;
        }
    }

    cout << llevo << "\n";

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
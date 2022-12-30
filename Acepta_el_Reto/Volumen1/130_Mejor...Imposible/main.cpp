#include <iostream>
#include <cmath>

using namespace std;

bool mixto(int x, int y)
{

    return (x % 2) != (y % 2);
}

bool caso()
{

    long dimensiones = 0;

    cin >> dimensiones;

    if (dimensiones == 0)
        return false;

    long x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 + y1 - x2 - y2) % 2)
    {

        cout << "IMPOSIBLE\n";
    }
    else
    {
        if (abs(x1 - x2) == abs(y1 - y2) || x1 + x2 == y1 - y2)
            cout << "1\n";
        else if (y2 == y1 && x2 == x1)
            cout << "0\n";

        else
            cout << "2\n";
    }

    return true;

    // Comprueba si es posible
}

int main()
{

    while (caso())
    {
    };

    return 0;
}
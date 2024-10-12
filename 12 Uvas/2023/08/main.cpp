#include <iostream>

using namespace std;

bool caso()
{
    unsigned long long int fila1, fila2, nino1, nino2;

    cin >> fila1 >> fila2 >> nino1 >> nino2;

    if (fila1 == 0 && fila2 == 0 && nino1 == 0 && nino2 == 0)
    {
        return false;
    }

    if (fila1 + fila2 >= nino1 + nino2 && (fila1 + fila2) % (nino1 + nino2) == 0)
    {

        if()
        cout << "SI\n";
    }
    else
    {

        cout << "NO\n";
    }

    return true;
}

int main()
{
    while (caso())
    {
    }

    return 0;
}
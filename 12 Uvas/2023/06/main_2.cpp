#include <iostream>
using namespace std;

int ordenar(int longi, int *ord)
{

    for (int i = 0; i < longi - 1; i++)
    {

        if (ord[i] > ord[i + 1])
        {
            return ordenar(longi / 2, ord + 1 + longi / 2);
        }
    }
    return longi;
}

bool casoDePrueba()
{
    int numeros;

    cin >> numeros;

    if (!cin)
        return false;
    else
    {
        int valores[numeros];

        for (int i = 0; i < numeros; i++)
        {
            cin >> valores[i];
        }

        cout << ordenar(numeros, valores) << "\n";

        return true;
    }

} // casoDePrueba

int main()
{

    while (casoDePrueba())
    {
    }

    return 0;
}

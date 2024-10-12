#include <iostream>

using namespace std;

int bolasCaja(int lado)
{

    int bolas = 0;

    for (int i = 1; i <= lado; i++)
    {
        bolas += i;
    }

    return bolas;
}

int main()
{

    unsigned long long int casos = 0;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        long long int bolas;
        cin >> bolas;

        unsigned long int contador = 1;
        unsigned long int tipo = 0;
        while (bolas >= 0)
        {
            bolas -= bolasCaja(contador);
            tipo++;
            contador++;
        }

        cout << tipo - 1 << "\n";
    }

    return 0;
}
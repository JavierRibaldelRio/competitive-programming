#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void caso()
{

    int n, x, clientes = 0;

    cin >> n >> x;

    vector<int> unidadesPorModelo(n);

    for (int i = 0; i < n; i++)
    {
        cin >> unidadesPorModelo[i];
    }

    sort(unidadesPorModelo.begin(), unidadesPorModelo.end());

    int acabados = 0;

    do
    {
        clientes++;
        // Ordena de mayor a menor

        int posicion = unidadesPorModelo.size() - 1;

        int cochesComprados = 0;

        while (cochesComprados != x && posicion >= 0)
        {
            if (--unidadesPorModelo[posicion] == 0)
            {
                unidadesPorModelo.erase(unidadesPorModelo.begin() + posicion);
            }
            cochesComprados++;
            posicion--;
        }

    } while (unidadesPorModelo.size() != 0);

    cout << clientes << "\n";
}

int main()
{

    // Se repite una vez por cada caso de prueba de la tarea
    int casos;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        caso();
    }

    return 0;
}
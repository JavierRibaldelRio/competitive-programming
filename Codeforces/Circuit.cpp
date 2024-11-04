#include <iostream>

using namespace std;

void caso()
{

    int nBombillas;

    cin >> nBombillas;

    int totalInterruptoresEnecendidos = 0;

    for (int i = 0; i < 2 * nBombillas; i++)
    {

        int encendido;

        cin >> encendido;

        totalInterruptoresEnecendidos += encendido;
    }

    // Mínimo, si es par el número de encendidos el número mínimo es 0 sino 1

    cout << totalInterruptoresEnecendidos % 2 << " ";

    // Maximo

    cout << nBombillas - abs(totalInterruptoresEnecendidos - nBombillas) << "\n";
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
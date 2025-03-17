#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int max, tipos;
    cin >> max >> tipos;

    while (max != 0 || tipos != 0)
    {
        string salida = "SI";
        int maxPorTipo[tipos];
        for (int i = 0; i < tipos; i++)
        {
            cin >> maxPorTipo[i];
        }

        int sumaTotal = 0;

        for (int i = 0; i < tipos; i++)
        {
            int polPorTipo;
            cin >> polPorTipo;

            sumaTotal += polPorTipo;

            if (polPorTipo > maxPorTipo[i])
            {
                salida = "NO";
            }
        }

        if (sumaTotal > max)
        {
            salida = "NO";
        }

        cout << salida << "\n";
        cin >> max >> tipos;
    }
    return 0;
}
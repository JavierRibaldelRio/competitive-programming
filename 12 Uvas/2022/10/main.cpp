#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool casoDePrueba()
{

    int n;
    cin >> n;

    if (!cin)
        return false;
    else
    {
        long tFontanero = 0, tElectricista = 0;

        long data[n];

        for (int i = 0; i < n; i++)
        {

            int d;
            cin >> d;
            data[i] = d;
        }

        sort(data, data + n);

        for (int i = n - 1; i >= 0; i--)
        {

            if (tFontanero > tElectricista)
                tElectricista += data[i];

            else

                tFontanero += data[i];
        }

        if (tElectricista > tFontanero)
        {

            cout << 2 * tElectricista << "\n";
        }
        else
        {

            cout << 2 * tFontanero << "\n";
        }

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
#include <iostream>
using namespace std;

bool casoDePrueba()
{
    int numeros;

    cin >> numeros;

    if (!cin)
        return false;
    else
    {
        int longitudFinal = numeros;

        long long int previo = 0;
        long long int posterior = 0;

        cin >> previo;
        for (int i = 0; i < numeros - 1; i++)
        {
            cin >> posterior;

            if (i >= numeros - longitudFinal)
            {

                if (posterior < previo)
                {
                    while (i >= numeros - longitudFinal)
                    {
                        longitudFinal /= 2;
                    }
                }
            }

            previo = posterior;
        }

        cout << longitudFinal << "\n";

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

#include <iostream>

using namespace std;

int main()
{

    int n;

    while (n != 0)
    {
        string cuadrado;

        cin >> n;
        cin >> cuadrado;
        int tabla[n][n];
        int posicion = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                tabla[i][j] = (int)cuadrado[posicion];
                cuadrado += 2;
            }
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cout << tabla[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
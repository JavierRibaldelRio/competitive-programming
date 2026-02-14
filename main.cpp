#include <bits/stdc++.h>
using namespace std;

const int MAX = 5001;

int contar(int n, int matriz[3][MAX])
{

    int cont = 0;

    for (int j = 0; j < n; j++)
    {

        // Comprobar que todo bien
        bool bien = true;

        for (int x = 0; x < n && bien; x++)
        {
            bien = matriz[0][x] < matriz[1][(x + j) % n];
        }

        if (!bien)
        {
            continue;
        }

        for (int k = 0; k < n; k++)
        {
            bien = true;
            for (int x = 0; x < n && bien; x++)
            {
                bien = matriz[1][(x + j) % n] < matriz[2][(x + k) % n];
            }

            if (bien)
            {
                cont++;
            }
        }
    }

    return cont * n;
}

int main()
{
    // cin

    int n;

    cin >> n;

    int b;
    for (int i = 0; i < n; i++)
    {

        cin >> b;

        int matriz[3][MAX];
        for (int k = 0; k < 3; k++)
        {

            for (int j = 0; j < b; j++)
            {
                cin >> matriz[k][j];
            }
        }

        cout << contar(b, matriz) << "\n";
    }

    return 0;
}

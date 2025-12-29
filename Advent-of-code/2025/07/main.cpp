#include <bits/stdc++.h>
using namespace std;

int longitud = 141;

int main()
{

    // Tablero

    char tablero[longitud + 1][longitud];

    for (int i = 0; i < longitud; i++)
    {
        for (int j = 0; j < longitud; j++)
        {

            cin >> tablero[i][j];
        }
    }

    for (int i = 0; i < longitud; i++)
    {

        tablero[longitud][i] = 'X';
    }

    long result = 0;
    // Buscar S

    int posS = 0;

    while (tablero[0][posS] != 'S')
    {
        posS++;
    }

    // Y X
    queue<pair<int, int>> restantes;

    set<pair<int, int>> visited;

    restantes.push({1, posS});

    while (!restantes.empty())
    {
        pair<int, int> cas = restantes.front();
        restantes.pop();

        if (visited.find(cas) == visited.end())
        {

            switch (tablero[cas.first][cas.second])
            {
            case '.':
                restantes.push({cas.first + 1, cas.second});
                break;

            case '^':
                result++;
                restantes.push({cas.first, cas.second - 1});
                restantes.push({cas.first, cas.second + 1});
                break;

            case 'X':
                break;
            }

            visited.insert(cas);
        }
    }

    cout << result << "\n";

    return 0;
}

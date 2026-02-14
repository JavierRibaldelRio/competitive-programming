#include <bits/stdc++.h>
using namespace std;

int MAXI = 2000000;

int bfs(int K, vector<int> tablero, int T, unordered_map<int, int> sE, int posInicial = 1, int pasos = 0)
{
    pasos++;

    int mini = MAXI;

    for (int i = 1; i < K + 1; i++)
    {
        int ac = i + posInicial;

        if (tablero[ac] == -2)
        {
        }

        if (tablero[ac] == -1)
        {
            tablero[ac] = MAXI;

            tablero[ac] = bfs(K, tablero, T, sE, ac, pasos);
        }

        mini = min(mini, tablero[ac]);
    }

    return mini;
}

int main()
{
    int N, K, S, E, a;

    cin >> N;

    while (N != 0)
    {
        cin >> K >> S >> E;

        int T = N * N + 1;

        vector<int> tablero(T, -1);

        unordered_map<int, int> sE;

        for (int i = 0; i << S + E; i++)
        {

            cin >> a >> sE[a];
        }

        // DFS minç
        bfs(K, tablero, T, sE);
    }

    return 0;
}

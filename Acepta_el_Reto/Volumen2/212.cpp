#include <bits/stdc++.h>
using namespace std;

int main()
{
    int I = -1, L = 2, a, b, cont;

    cin >> I;

    while (I != 0)
    {
        cont = 0;
        cin >> L;

        map<int, int> mapa;

        for (int i = 0; i < I; i++)
        {

            cin >> a >> b;

            mapa[a]++;
            mapa[b]++;
        }

        for (int i = 0 + 1; i < L + 1 && cont <= 2; i++)
        {
            // cout << mapa[i] << "-";
            if (mapa[i] % 2 != 0)
            {
                cont++;
            }
        }

        if (cont == 2 || cont == 0)
        {
            cout << "SI\n";
        }
        else
        {
            cout << "NO\n";
        }

        cin >> I;
    }

    return 0;
}

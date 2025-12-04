#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ori;

    cin >> ori;

    int lon = ori.size();

    long long cont = 0;
    vector<vector<char>> est;

    est.push_back({});
    for (int i = 0; i < lon + 2; i++)
    {

        est[0].push_back('.');
    }

    int i = 1;
    // Primera pos

    est.push_back({});

    est[i].push_back('.');

    est[i].insert(est[i].end(), ori.begin(), ori.end());

    est[i].push_back('.');

    i++;
    while (cin >> ori)
    {
        est.push_back({});

        // Primera pos
        est[i].push_back('.');

        est[i].insert(est[i].end(), ori.begin(), ori.end());

        est[i].push_back('.');

        i++;
    }

    est.push_back({});
    for (int j = 0; j < lon + 2; j++)
    {

        est[i].push_back('.');
    }

    for (auto row : est)
    {
        for (auto p : row)
        {
            cout << p << " ";
        }
        cout << "\n";
    }

    int sizeF = est[0].size();
    // Omitimos fila 0  y fila size-1
    bool cambio = true;
    while (cambio)
    {
        cambio = false;

        for (int j = 1; j < est.size() - 1; j++)
        {

            for (int k = 1; k < sizeF - 1; k++)
            {

                if (est[j][k] == '@')
                {
                    int ady = 8;

                    if (est[j + 1][k + 1] != '@')
                    {
                        ady--;
                    }
                    if (est[j + 1][k] != '@')
                    {
                        ady--;
                    }
                    if (est[j + 1][k - 1] != '@')
                    {
                        ady--;
                    }
                    if (est[j][k + 1] != '@')
                    {
                        ady--;
                    }
                    // El mismo
                    if (est[j][k - 1] != '@')
                    {
                        ady--;
                    }
                    if (est[j - 1][k + 1] != '@')
                    {
                        ady--;
                    }
                    if (est[j - 1][k] != '@')
                    {
                        ady--;
                    }

                    if (est[j - 1][k - 1] != '@')
                    {
                        ady--;
                    }

                    if (ady < 4)
                    {
                        est[j][k] = '.';
                        cont++;

                        cambio = true;
                    }
                }
            }
        }
    }

    for (auto row : est)
    {
        for (auto p : row)
        {
            cout << p << " ";
        }
        cout << "\n";
    }

    cout << cont++ << endl;

    return 0;
}

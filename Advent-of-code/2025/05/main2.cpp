#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long inicio, fin, cont = 0;

    pair<unsigned long long, unsigned long long> objet;
    char guion;
    vector<pair<unsigned long long, unsigned long long>> tot;

    while (cin >> inicio)
    {

        if (inicio == 0)
        {
            break;
        }

        cin >> guion >> fin;

        if (tot.size() == 0)
        {
            tot.push_back({inicio, fin});
        }

        else if (tot.size() != 0)
        {
            // Inserción
            int i = 0, lon = tot.size();
            while (i < lon && inicio > tot[i].first)
            {
                i++;
            }

            // Si es el último
            if (i == lon)
            {
                if (inicio > tot[i - 1].second)
                {

                    tot.push_back({inicio, fin});
                }

                else
                {
                    tot[i - 1].second = fin;
                }
            }
            // si está por la mitad
            else
            {
                if (i == 0)
                {
                    // Si el final del nuevo menor que el actual
                    if (fin < tot[i].second)
                    {
                        tot[i].first = inicio;
                    }

                    // si iguales
                    else if (fin == tot[i].second)
                    {

                        tot[i].first = inicio;
                        tot[i].second = fin;
                    }

                    // Si es mayor
                    else
                    {

                        int j = i;

                        while (j < lon && fin > tot[j].second)
                        {

                            j++;
                        }

                        // Mayor de todos
                        if (j == lon)
                        {
                            tot[i].second = fin;

                            tot.erase(tot.begin() + i + 1, tot.end());
                        }

                        // Mayor
                        else if (fin < tot[j].first)
                        {
                            tot.erase(tot.begin() + i + 1, tot.begin() + j - 1);
                            tot[i].second = fin;
                        }

                        else if (fin > tot[j].first)
                        {

                            tot[i].second = tot[j].second;

                            tot.erase(tot.begin() + i + 1, tot.begin() + j);
                        }
                    }
                }
            }
        }
    }

    cout << tot.size() << "\n";

    for (const auto i : tot)
    {

        cout << i.first << "--" << i.second << "\n";
    }

    // cout << cont << "\n";

    return 0;
}

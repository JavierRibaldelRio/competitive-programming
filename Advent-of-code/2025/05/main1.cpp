#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long inicio, fin;

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
        tot.push_back({fin, inicio});
    }

    // cout << tot.size() << "\n";

    sort(tot.begin(), tot.end());

    // for (const auto i : tot)
    // {

    //     cout << i.first << "--" << i.second << "\n";
    // }

    int cont = 0;

    while (cin >> inicio)
    {

        pair<unsigned long long, unsigned long long> *pos;
        int i = 0;
        cout << inicio << "\n-------\n";
        pos = &tot[0];
        cout << inicio << "--:" << pos->second << " " << pos->first << "\n";

        while (i < tot.size())
        {
            cout << inicio << ":" << pos->second << " " << pos->first << "\n";

            pos = &tot[i];
            if (pos->second <= inicio && inicio <= pos->first)
            {
                cont++;
                break;
            }
            i++;
        }
    }

    cout << cont << "\n";

    return 0;
}

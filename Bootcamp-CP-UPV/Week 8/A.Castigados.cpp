#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long n;

    cin >> n;

    unordered_map<unsigned long, unsigned long> acus;

    for (unsigned long i = 0; i < n; i++)
    {

        unsigned long acusoA;
        cin >> acusoA;

        acus[i + 1] = acusoA;
    }

    for (unsigned long i = 1; i < n + 1; i++)
    {

        vector<bool> boliRojoEnMesa(n + 1, false); // array de n falses

        unsigned long nextA = i;

        do
        {
            boliRojoEnMesa[nextA] = true;
            nextA = acus[nextA];

        } while (boliRojoEnMesa[nextA] == false);

        cout << nextA << " ";
    }

    return 0;
}
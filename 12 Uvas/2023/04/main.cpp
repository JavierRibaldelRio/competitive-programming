#include <iostream>
#include <set>

using namespace std;

bool caso()
{
    int pendi = 0;

    cin >> pendi;

    if (pendi == 0)
    {
        return false;
    }
    unsigned long int parejas = 0;

    set<unsigned long long int> caja;

    for (int i = 0; i < pendi; i++)
    {
        int pendN;
        cin >> pendN;
        if (caja.count(pendN) != 0)
        {
            caja.erase(pendN);
            parejas++;
        }
        else
        {
            caja.insert(pendN);
        }
    }

    cout << parejas << "\n";

    return true;
}

int main()
{
    while (caso())
    {
    }

    return 0;
}
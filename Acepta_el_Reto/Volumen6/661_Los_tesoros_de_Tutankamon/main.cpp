#include <iostream>
#include <algorithm>

using namespace std;

struct reli
{

    string nombre;

    int peso;

    int valor;
};

bool compara(reli x, reli y)
{

    if (x.valor > y.valor)
    {
        return 1;
    }
    else if (x.valor < y.valor)
    {

        return 0;
    }

    else
    {

        if (x.peso < y.peso || x.peso == y.peso)
        {

            return 0;
        }
        else
        {
            return 1;
        }
    }
}

bool caso()
{

    int n;
    cin >> n;

    if (n == 0)
    {
        return false;
    }

    reli relis[n];

    for (int i = 0; i < n; i++)
    {

        cin >> relis[i].nombre >> relis[i].valor >> relis[i].peso;
    }

    sort(relis, relis + n, compara);

    for (int i = 0; i < n; i++)
    {
        cout << relis[i].nombre << " ";
    }
    cout << "\n";
    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
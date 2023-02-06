#include <iostream>

using namespace std;

struct drones
{

    unsigned long in;

    unsigned long fi;
};

void invertir(drones &dron)
{

    if (dron.in > dron.fi)
    {

        int temp = dron.in;

        dron.in = dron.fi;

        dron.fi = temp;
    }
}

void caso()
{

    drones d1, d2;

    cin >> d1.in >> d1.fi >> d2.in >> d2.fi;

    invertir(d1);

    invertir(d2);

    drones ord[2];

    if (d1.in < d2.in)
    {

        ord[0] = d1;

        ord[1] = d2;
    }

    else
    {
        ord[1] = d1;

        ord[0] = d2;
    }

    if (ord[0].fi > ord[1].in)
    {

        cout << "SOLAPADOS\n";
    }
    else
    {

        cout << "SEPARADOS\n";
    }
}

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        caso();
    }

    return 0;
}

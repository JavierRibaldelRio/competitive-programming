#include <iostream>

using namespace std;

bool caso()
{
    int regletas = 0;

    cin >> regletas;

    if (regletas == 0)
    {
        return false;
    }

    int contador = 0;

    for (int i = 0; i < regletas; i++)
    {

        int enchufes;

        cin >> enchufes;

        contador += enchufes;
    }

    cout << contador - regletas + 1 << endl;

    return true;
}

int main()
{
    while (caso())
    {
    }

    return 0;
}
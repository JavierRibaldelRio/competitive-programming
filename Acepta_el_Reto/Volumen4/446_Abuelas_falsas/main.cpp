#include <iostream>
#include <string>
using namespace std;

void caso()
{

    string nombre, nombre2;

    cin >> nombre;

    int n;

    cin >> n;

    bool autentica = true;

    for (int i = 0; i < n; i++)
    {

        cin >> nombre2;

        if (i < n - 1 && nombre.compare(nombre2))
        {

            autentica = false;
        }
    }

    if (nombre.compare(nombre2) == 0 && n > 1 && autentica)
    {

        cout << "VERDADERA\n";
    }

    else
    {

        cout << "FALSA\n";
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
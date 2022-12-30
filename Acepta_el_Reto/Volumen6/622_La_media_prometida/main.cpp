#include <iostream>
#include <string>

using namespace std;

bool caso()
{

    int n;

    cin >> n;

    if (n == 0)
    {
        return false;
    }

    // cin.ignore(256, '\n');

    string notas;

    int deseado, mediaActual, suma = 0, necesario;

    for (int i = 0; i < n; i++)
    {
        int nota;
        cin >> nota;
        suma += nota;
    }
    cin >> deseado;

    necesario = deseado * (n + 1) - suma;
    if (necesario > 10 || necesario < 0)
        cout << "IMPOSIBLE";
    else
        cout << necesario;

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
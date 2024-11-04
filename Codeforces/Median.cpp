#include <iostream>

using namespace std;

void caso()
{

    int n, k;

    cin >> n >> k;

    // La mediana coincide con la mediana
    if (n / 2 + 1 == k)
    {

        cout << n;

        cout << "\n"
             << 1;
        for (int i = 2; i < n + 1; i++)
        {
            cout << " " << i;
        }
    }
    else
    {
        cout << -1;
    }

    cout << "\n";
}

int main()
{
    // Se repite una vez por cada caso de prueba de la tarea
    int casos;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        caso();
    }

    return 0;
}
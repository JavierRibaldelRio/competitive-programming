#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int updateR(int a, int x)
{
    if (a > x)
    {
        return x + 1;
    }

    if (x > a)
    {
        return x - 1;
    }

    return x;
}

void caso()
{

    unsigned int n;

    cin >> n;

    unsigned int rat[n];

    for (int i = 0; i < n; i++)
    {
        cin >> rat[i];
    }

    unsigned int max = 0;

    // Selecciona l
    for (int i = 0; i < n - 1; i++)
    {
        // Selecciona R
        for (int j = i + 1; j < n; j++)
        {
            int x = 0;
            // antes de R
            for (int k = 0; k < i; k++)
            {

                x = updateR(rat[k], x);
            }

            // Después de R
            for (int k = j + 1; k < n; k++)
            {

                x = updateR(rat[k], x);
            }

            if (x > max)
            {

                max = x;
            }
        }
    }

    cout << max << "\n";
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
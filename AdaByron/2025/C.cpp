#include <bits/stdc++.h>

using namespace std;

void solveGauss(int);

int main()
{

    int n;

    cin >> n;

    while (cin)
    {
        solveGauss(n);

        cin >> n;
    }

    return 0;
}

void solveGauss(int n)
{

    double a[n][n]; // Matriz de coeficientes
    double b[n];    // Vector de términos independientes
    double x[n];    // Vector de resultados

    int pos = n - 1; // Posición actual

    // Inicialización de a
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Inicialización de b
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // Resolución del sistema por Gauss
    while (pos >= 0)
    {

        double anterior = 0;

        for (int j = n - 1; j > pos; j--)
        {

            anterior += x[j] * a[pos][j];
        }

        x[pos] = (b[pos] - anterior) / a[pos][pos];

        pos--;
    }

    // Impresión de resultados
    cout << n << ": ";
    for (int i = 0; i < n; i++)
    {
        printf("%.5f ", x[i]);
    }
    cout << "\n";
}
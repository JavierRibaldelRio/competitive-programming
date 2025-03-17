#include <bits/stdc++.h>

using namespace std;

void lineaAlmohadillas(int);
void columnasAscendente(int);
void columnasDescendente(int);

void flechaRecursiva(int n)
{
    columnasAscendente(n - 1);

    lineaAlmohadillas(n);

    columnasDescendente(n - 1);
}

void columnasAscendente(int n)
{
    if (n == 0)
    {
        return;
    }
    columnasAscendente(n - 1);
    lineaAlmohadillas(n);
}

void columnasDescendente(int n)
{

    if (n == 0)
    {
        return;
    }
    lineaAlmohadillas(n);

    columnasDescendente(n - 1);
}

void lineaAlmohadillas(int n)
{
    if (n == 0)
    {
        cout << "\n";
        return;
    }

    cout << "#";
    lineaAlmohadillas(n - 1);
}

int main()
{

    int n;

    cin >> n;

    flechaRecursiva(n);

    return 0;
}
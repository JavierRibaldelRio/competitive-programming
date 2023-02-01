#include <iostream>

using namespace std;

void imprimir(char ch, int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << ch;
    }
}

bool caso()
{
    int l;

    char ch;

    cin >> l >> ch;

    if (ch == '0' && l == 0)
    {

        return false;
    }

    for (int i = 0; i < l; i++)
    {

        imprimir(' ', l - i - 1);

        imprimir(ch, i * 2 + l);

        cout << "\n";
    }

    for (int i = l - 2; i >= 0; i--)
    {
        imprimir(' ', l - i - 1);

        imprimir(ch, i * 2 + l);

        cout << "\n";
    }
    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
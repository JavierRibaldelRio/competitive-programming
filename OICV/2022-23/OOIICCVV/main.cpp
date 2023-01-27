#include <iostream>

using namespace std;

void imprmir(int n, char l)
{

    for (int i = 0; i < n; i++)
    {

        cout << l;
    }
}

void caso()
{

    int o, i, c, v;

    cin >> o >> i >> c >> v;

    imprmir(o, 'O');
    imprmir(i, 'I');
    imprmir(c, 'C');
    imprmir(v, 'V');

    cout << "\n";
}

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        caso();
    }
}
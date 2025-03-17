#include <bits/stdc++.h>

using namespace std;

void cuentaAtras(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << "\n";
    cuentaAtras(n - 1);
}

int main()
{

    int n;

    cin >> n;

    cuentaAtras(n);

    return 0;
}
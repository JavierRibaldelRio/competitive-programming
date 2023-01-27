#include <iostream>

using namespace std;

bool primo(int n)
{

    if (n == 0 || n == 1 || n == 4)
    {
        return false;
    }

    for (int i = 2; i < n / 2; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void caso()
{

    int n, k;

    cin >> n >> k;

    if (k == 0)
    {

        if (primo(n))
            cout << "SI\n";

        else
            cout << "NO\n";
    }

    else
    {

        int cont = 0;

        int numeroComprobar = n;

        while (cont < k)
        {
            numeroComprobar++;
            while (primo(numeroComprobar) == false)
            {

                numeroComprobar++;
            }

            cout << numeroComprobar << " ";
            cont++;
        }

        cout << "\n";
    }
}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        caso();
    }

    return 0;
}
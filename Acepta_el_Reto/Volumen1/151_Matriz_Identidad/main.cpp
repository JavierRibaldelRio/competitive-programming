#include <iostream>

using namespace std;

bool caso()
{

    int n;

    cin >> n;

    if (n == 0)
    {

        return false;
    }

    bool correcto = true;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            int n;

            cin >> n;

            if (correcto)
            {
                if (i == j && n != 1)
                {
                    correcto = false;
                }

                else if (i != j && n != 0)
                {

                    correcto = false;
                }
            }
        }
    }

    if (correcto)
    {

        cout << "SI\n";
    }

    else
    {

        cout << "NO\n";
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
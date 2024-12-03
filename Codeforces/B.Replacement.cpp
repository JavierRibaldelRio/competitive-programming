#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool caso()
{

    int n, m;

    cin >> n;

    m = n - 1;

    vector<char> s(n);
    vector<char> r(m);
    // Gets data
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> r[i];
    }

    // operates

    for (int i = 0; i < m; i++)
    {
        bool seguir = true;

        for (int j = 0; j < m - i; j++)
        {
            if (s[j] != s[j + 1])
            {
                s.erase(s.begin() + j + 1);
                s[j] = r[i];
                seguir = false;
                break;
            }
        }

        if (seguir)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    // Se repite una vez por cada caso de prueba de la tarea
    int casos;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        cout << (caso() ? "YES" : "NO") << "\n";
    }

    return 0;
}
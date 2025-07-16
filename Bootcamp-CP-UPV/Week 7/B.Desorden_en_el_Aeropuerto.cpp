#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<queue<char>, 3> c;

    unsigned int n = 0;
    char temp;

    cin >> n;
    for (int j = 0; j < 3; j++)
    {
        for (unsigned int i = 0; i < n; i++)
        {
            cin >> temp;
            c[j].push(temp);
        }
    }

    string option;
    int to;

    while (cin >> option)
    {
        if (option == "MOVER")
        {
            cin >> n >> to;
            // Validar índices y que la cola origen no esté vacía
            if (n < 3 && to < 3 && !c[n].empty())
            {
                c[to].push(c[n].front());
                c[n].pop();
            }
        }
        else if (option == "ATENDER")
        {
            cin >> n;
            // Validar índice y que la cola no esté vacía
            if (n < 3 && !c[n].empty())
            {
                c[n].pop();
            }
        }
        else if (option == "AGREGAR")
        {
            cin >> temp >> to;
            // Validar índice
            if (to < 3)
            {
                c[to].push(temp);
            }
        }
    }

    // Print final
    for (int i = 0; i < 3; i++)
    {
        if (c[i].empty())
        {
            cout << "NO HAY NADIE\n";
        }
        else
        {
            // Copiar sin modificar las colas originales
            queue<char> copia = c[i];
            while (!copia.empty())
            {
                cout << copia.front() << " ";
                copia.pop();
            }
            cout << "\n";
        }
    }

    return 0;
}

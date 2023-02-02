#include <iostream>
#include <algorithm>

using namespace std;

struct tarea
{

    int tiempo;

    int prioridad;
};

bool compara(tarea a, tarea b)
{

    if (a.prioridad > b.prioridad)
    {

        return 1;
    }

    else if (a.prioridad == b.prioridad)
    {

        return (a.tiempo < b.tiempo);
    }

    else
    {
        return 0;
    }
}

bool caso()
{

    int n;

    cin >> n;

    if (n == 0)
    {

        return false;
    }

    tarea tareas[n];

    for (int i = 0; i < n; i++)
    {

        cin >> tareas[i].prioridad;

        cin >> tareas[i].tiempo;
    }

    sort(tareas, tareas + n, compara);

    for (tarea i : tareas)
    {

        cout << i.prioridad << " " << i.tiempo << "\n";
    }

    cout << "---\n";

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
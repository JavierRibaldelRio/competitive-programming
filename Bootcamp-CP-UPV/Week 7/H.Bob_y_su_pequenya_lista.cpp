#include <bits/stdc++.h>

using namespace std;

struct Nodo
{

    Nodo *previous;
    Nodo *next;
    bool esExtremo = false;
    char ch = '^';
    bool esSelector = false;
};

void eliminarSeleccion(bool porD, Nodo *anclaje, Nodo *posicion)
{
    if (porD)
    {

        anclaje->previous->next = posicion;
        posicion->previous = anclaje->previous;
    }

    else
    {

        posicion->next = anclaje->next;
        anclaje->next->previous = posicion;
    }
}

int main()
{
    // Definición de iniciales

    Nodo *inicio = new Nodo(),                 // Inicio de la cadena
         *final = new Nodo(),                  // Final de la cadena
            *position = new Nodo(),            // Se corresponde con |
                *anclajeSelector = new Nodo(), // Selector
                    *recorredor = nullptr;     // Se utiliz apara recorrer la cadena

    inicio->next = position;
    inicio->esExtremo = true;
    position->previous = inicio;
    position->next = final;
    position->ch = '|';
    final->previous = position;
    final->esExtremo = true;
    bool enSeleccion = false, seleccionadoPorDerecha;

    anclajeSelector->esSelector = true;

    unsigned int q;
    cin >> q;

    string op = "";
    char ch;

    for (unsigned int i = 0; i < q; i++)
    {

        cin >> op;

        if (op == "PRINT")
        {

            recorredor = inicio->next;

            while (!recorredor->esExtremo)
            {
                if (!recorredor->esSelector)
                {
                    cout << recorredor->ch;
                }
                recorredor = recorredor->next;
            }

            cout << "\n";
        }
        else if (op == "SELECT")
        {

            // Quitar la selección
            if (enSeleccion)
            {

                anclajeSelector->previous->next = anclajeSelector->next;
                anclajeSelector->next->previous = anclajeSelector->previous;

                enSeleccion = false;

                // Faltaría desconfigurar anclajeSelector->(next/previous) pero no hace falta
            }
            // Activar la selección
            else
            {

                anclajeSelector->previous = position->previous;
                position->previous->next = anclajeSelector;
                anclajeSelector->next = position;
                position->previous = anclajeSelector;

                seleccionadoPorDerecha = true;

                enSeleccion = true;
            }
        }
        else if (op == "INSERT")
        {
            cin >> ch;

            if (enSeleccion)
            {
                enSeleccion = false;
                eliminarSeleccion(seleccionadoPorDerecha, anclajeSelector, position);
            }

            Nodo *nuevo = new Nodo();

            nuevo->ch = ch;

            nuevo->next = position;
            nuevo->previous = position->previous;

            position->previous->next = nuevo;
            position->previous = nuevo;
        }
        else if (op == "MOVE_LEFT")
        {

            if (enSeleccion)
            {
                // Si es el ancla lo saltamos
                if (position->previous->esSelector && !position->previous->esExtremo)
                {
                    position->previous->next = position->next;
                    position->next->previous = position->previous;

                    position->previous->previous->next = position;
                    position->next = position->previous;

                    position->previous = position->next->previous;
                    position->next->previous = position;
                    seleccionadoPorDerecha = false;
                }
            }
            if (!position->previous->esExtremo)
            {
                position->previous->next = position->next;
                position->next->previous = position->previous;

                position->previous->previous->next = position;
                position->next = position->previous;

                position->previous = position->next->previous;
                position->next->previous = position;
            }
        }

        else if (op == "MOVE_RIGHT")
        {

            if (enSeleccion && position->next->esSelector && !position->next->esExtremo)
            {
                position->next->previous = position->previous;
                position->previous->next = position->next;

                position->next->next->previous = position;
                position->previous = position->next;

                position->next = position->previous->next;
                position->previous->next = position;
                seleccionadoPorDerecha = true;
            }
            if (!position->next->esExtremo)
            {
                position->next->previous = position->previous;
                position->previous->next = position->next;

                position->next->next->previous = position;
                position->previous = position->next;

                position->next = position->previous->next;
                position->previous->next = position;
            }
        }
        else if (op == "DELETE")
        {
            if (enSeleccion)
            {
                eliminarSeleccion(seleccionadoPorDerecha, anclajeSelector, position);
                enSeleccion = false;
            }
            else if (!position->next->esExtremo)
            {
                // position->previous->previous->next = position;
                // position->previous = position->previous->previous;
                position->next->next->previous = position;
                position->next = position->next->next;
            }
        }

        else if (op == "BEGIN" || op == "END")
        {

            // Eliminar posición

            position->next->previous = position->previous;
            position->previous->next = position->next;

            if (op == "BEGIN")
            {

                seleccionadoPorDerecha = false;

                position->next = inicio->next;
                position->previous = inicio;
                inicio->next = position;
                position->next->previous = position;
            }

            else
            {

                seleccionadoPorDerecha = true;

                position->previous = final->previous;
                position->next = final;
                final->previous = position;
                position->previous->next = position;
            }
        }
    }

    return 0;
}
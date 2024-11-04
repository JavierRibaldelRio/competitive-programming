#include <iostream>

using namespace std;

void caso()
{

    // Obtiene el número de familias y cuantas filas tiene el autobús
    int nF, row;
    cin >> nF >> row;

    // Almacena las filas disponibles

    int filasD = row;

    // Almacena el número de gente feliz
    int felices = 0, infelices = 0;

    /*
     *  Sí el número de integrantes de la familia es par serán todos felices,
     *  Mientras que si van impares habrá uno que se quedara suelto
     */

    for (int i = 0; i < nF; i++)
    {
        // Recoge los integrantes de la familia
        int integrantesFamilia;
        cin >> integrantesFamilia;

        // Checks if it is even
        if (integrantesFamilia % 2 == 0)
        {
            felices += integrantesFamilia;
        }

        // Si es impar el número de infelices aumenta en uno porque se queda descolgado
        else
        {
            felices += integrantesFamilia - 1;
            infelices++;
        }

        // Elimina las filas ocupados, por los dos miembros de la familia (trunca el resultado de la división)
        filasD -= integrantesFamilia / 2;
    }

    // Mientras haya más infelices que filas vacías junta a dos infelices y los siente en una fila vacía
    while (filasD < infelices)
    {
        filasD--;
        infelices -= 2;
    }

    // Cuando el número de infelices sea igual que el de filas disponibles significa que todos los infelices se pueden sentar solos, por lo que pasan a ser felices

    felices += infelices;

    // imprime felices
    cout << felices << "\n";
}

int main()
{

    // Se repite una vez por cada caso de prueba de la tarea
    int casos;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        caso();
    }

    return 0;
}
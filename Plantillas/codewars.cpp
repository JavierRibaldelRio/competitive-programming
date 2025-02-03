
#include <bits/stdc++.h>

using namespace std;

// Struct
struct Persona
{
    std::string nombre;
    int edad;
};

bool compararPorEdad(const Persona &p1, const Persona &p2)
{
    return p1.edad < p2.edad; // Comparar las edades
}

int main()
{
    // Map
    map<string, int> caja; // Declaración
    caja["tomates"] = 12;
    caja["leche"] = 13;
    caja["sellos"] = 13;                 // Modificación
    caja.erase("sellos");                // Supresión
    bool comprar = caja.count("sellos"); // No existe
    cout << caja["tomates"] << "\n";     // Obtención

    // Iteración sobre un map (ejemplo pair)

    for (pair<string, int> producto : caja)
    {
        cout << producto.first << producto.second << "\n";
    }

    // Set

    set<string> s_pueblos;      // Declaración
    s_pueblos.insert("Játiva"); // Modificación
    s_pueblos.insert("Utiel");
    s_pueblos.insert("Montesa");
    s_pueblos.insert("Enguera");

    s_pueblos.erase("Quart");                // Eliminación
    bool existe = s_pueblos.count("Játiva"); // Búsqueda

    // Vectores

    std::vector<int> v = {10, 20, 30, 40, 50};

    // Devuelve la posición del objeto
    auto it = std::find(v.begin(), v.end(), 30);
    // Devuelve la distancia entre dos elementos -1 si no está
    int index = distance(v.begin(), it);

    // Invierte el vector
    reverse(v.begin(), v.end());

    // max_element devuelve un puntero
    int max_it = *max_element(v.begin(), v.end()), min_it = *min_element(v.begin(), v.end());

    std::vector<Persona> personas = {
        {"Alice", 30},
        {"Bob", 80},
        {"Charlie", 25},
        {"David", 50}};

    // Encontrar la persona con la edad máxima usando la función de comparación
    auto max_persona = *std::max_element(personas.begin(), personas.end(), compararPorEdad);

    std::cout << "La persona con la edad máxima es " << max_persona.nombre
              << " con " << max_persona.edad << " años." << std::endl;

    // Ordenar las personas por edad usando la función de comparación
    std::sort(personas.begin(), personas.end(), compararPorEdad);

    return 0;
}

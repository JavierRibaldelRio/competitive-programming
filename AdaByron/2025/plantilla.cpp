
#include <bits/stdc++.h>

using namespace std;

struct Persona
{

    string nombre;
    int edad; 

};

int main(){


    map <string, int> caja;

    caja["tomates"] = 12;
    caja["leche"] = 13;
    caja["sellos"] = 13;


    bool comprar = caja.count("sellos");

    cout << comprar << endl;


    for(pair<string, int> producto: caja){

        cout << producto.first << " " << producto.second << "\n";
    }

    // Set
    set <string> s_pueblos;

    s_pueblos.insert("Játiva");
    s_pueblos.insert("Jtiva");
    s_pueblos.insert("Montesa");
    
    s_pueblos.erase("Montesa");

    bool existe = s_pueblos.count("Játiva");


    vector <Persona>  personas = {{"Alice",30},{"Bob",80},{"Cha",25},{"da",50}};

    auto max_per = *max_element(personas.begin(), personas.end(), compararPorEdad);

    sort(personas.begin(), personas.end(), compararPorEdad);

    return 0;
}
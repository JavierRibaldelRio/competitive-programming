#include <iostream>

#include <string>

using namespace std;

string personas[] = {"yo", "tu", "el", "nosotros", "vosotros", "ellos"};

// Conjugación , Tiempo, persona
string desinencias[3][3][6] = {
    {{"o", "as", "a", "amos", "ais", "an"},
     {"e", "aste", "o", "amos", "asteis", "aron"},
     {"are", "aras", "ara", "aremos", "areis", "aran"}},

    {{"o", "es", "e", "emos", "eis", "en"},
     {"i", "iste", "io", "imos", "isteis", "ieron"},
     {"ere", "eras", "era", "eremos", "ereis", "eran"}},

    {{"o", "es", "e", "imos", "is", "en"},
     {"i", "iste", "io", "imos", "isteis", "ieron"},
     {"ire", "iras", "ira", "iremos", "ireis", "iran"}}

};

int equivalenciasModelos(char con)
{

    switch (con)
    {
    case 'a':
        return 0;
        break;
    case 'e':
        return 1;
        break;
    case 'i':
        return 2;
        break;
    }

    return -1;
}

int equivalenciasTiempos(char con)
{

    switch (con)
    {
    case 'A':
        return 0;
        break;
    case 'P':
        return 1;
        break;
    case 'F':
        return 2;
        break;
    }

    return -1;
}

bool caso()
{

    string s;

    char t;

    cin >> s >> t;

    if (t == 'T')
    {

        return false;
    }

    string raiz = s.substr(0, s.length() - 2);

    int modelo = equivalenciasModelos(s.at(s.length() - 2));

    int tiempo = equivalenciasTiempos(t);

    for (int i = 0; i < 6; i++)
    {

        cout << personas[i] << " " << raiz << desinencias[modelo][tiempo][i] << "\n";
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
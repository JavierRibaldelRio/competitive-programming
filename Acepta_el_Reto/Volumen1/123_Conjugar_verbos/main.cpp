#include <iostream>

#include <string>

using namespace std;

string personas[] = {"yo", "tu", "el", "nosotros", "vosotros", "ellos"};

// Conjugación , Tiempo, persona
string desinencias[3][3][6] = {{{"o", "as", "a", "amos", "ais", "an"},
                                {"e", "aste", "o", "amos", "asteis", "aron"},
                                {"are", "aras", "ara", "aremos", "tareis", "taran"}}

                               {
                                   {"o", "es", "e", "os", "eis", "en"},
                                   {"i", "iste", "io", "imos", "isteis", "ieron"}}}

bool
caso()
{

    string s;

    char t;

    cin >> s >> t;

    if (t == 'T')
    {

        return false;
    }

    string raiz;

    char tiempo = s.at(s.length)
}
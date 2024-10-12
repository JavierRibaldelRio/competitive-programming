#include <iostream>

using namespace std;

int main()
{

    unsigned long long int casos = 0;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {

        unsigned long long int uvas, comensales;

        cin >> uvas >> comensales;

        if (uvas / comensales >= 12)
        {

            cout << "SI\n";
        }
        else
        {

            cout << "NO\n";
        }
    }

    return 0;
}
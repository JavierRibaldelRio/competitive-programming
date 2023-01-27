#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n, k;

    cin >> n >> k;

    if (k == 0)
    {

        for (int i = 0; i < n; i++)
        {

            cout << "Hola OICV\n";
        }
    }

    else
    {

        for (int i = 0; i < n; i++)
        {

            string name;

            cin >> name;

            cout << "Hola " << name << "\n";
        }
    }

    return 0;
}
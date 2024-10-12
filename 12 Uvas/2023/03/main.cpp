#include <iostream>
#include <string>

using namespace std;

int comprobarPalindromo(int pos1[2], int pos2[2], int pos3[2])
{
    if (pos1[0] == pos2[1] && pos1[1] == pos3[0] && pos2[0] == pos3[1])
    {
        return 0;
    }
    return 1;
}

int main()
{

    unsigned long long int casos = 0;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {

        int date[3][2];

        for (int j = 0; j < 3; j++)
        {
            int num;
            cin >> num;
            date[j][0] = num / 10;
            date[j][1] = num % 10;
        }
        int resultado = 1;

        resultado *= comprobarPalindromo(date[0], date[1], date[2]);
        resultado *= comprobarPalindromo(date[0], date[2], date[1]);
        resultado *= comprobarPalindromo(date[1], date[0], date[2]);
        resultado *= comprobarPalindromo(date[1], date[2], date[0]);
        resultado *= comprobarPalindromo(date[2], date[0], date[1]);
        resultado *= comprobarPalindromo(date[2], date[1], date[0]);

        if (resultado == 1)
        {
            cout << "INSULSOS\n";
        }
        else
        {

            cout << "DIVERTIDOS\n";
        }
    }

    return 0;
}
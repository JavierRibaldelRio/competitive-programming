#include <iostream>
#include <string>
#include <vector>
using namespace std;

int extraerDigito(string s, int n)
{

    if (s.length() - 1 < n)
    {

        return 0;
    }

    return s.at(n) - '0';
}

void caso()
{

    string n1, n2;

    cin >> n1 >> n2;
    
    int resultado

    int longitudMayor = (n1.length() > n2.length()) ? n1.length() : n2.length();

    for (int i = longitudMayor - 1; i >= 0; i--)
    {

        resultado = resultado + extraerDigito(n1, i) * extraerDigito(n2, i) * 10 * i;
    }

    cout << resultado << "\n";
}

int main()
{

    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        caso();
    }

    return 0;
}
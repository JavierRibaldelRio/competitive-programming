#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    cin.ignore();
    stack<string> pila;
    string first, name, line;

    for (int i = 0; i < n; i++)
    {
        getline(cin, line);

        if (line == "Retiran")
        {

            pila.pop();
        }
        else
        {
            pila.push(line.substr(10));
        }
    }

    if (pila.empty())
    {

        cout << "No quedan libros\n";
    }
    else
    {
        while (!pila.empty())
        {

            cout << pila.top() << "\n";

            pila.pop();
        }
    }

    return 0;
}
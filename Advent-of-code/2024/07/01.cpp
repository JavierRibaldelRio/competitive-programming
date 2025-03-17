#include <bits/stdc++.h>

using namespace std;

int validar(string);

int main()
{

    // Crear un objeto ifstream
    std::ifstream file("input");

    // Leer el archivo línea por línea
    string line;

    unsigned long long count = 0;
    while (getline(file, line))
    {

        count += validar(line);
    }

    // Cerrar el archivo
    file.close();

    return 0;
}

int validar(string str)
{

    int pos = str.find(':');

    long long result = stoll(str.substr(0, pos));

    vector<int> operandos;

    stringstream ss(str.substr(pos + 2));
    string token;

    while (getline(ss, token, ' '))
    {

        operandos.push_back(stoi(token));
    }

    for (int i : operandos)
    {

        cout << i << " ";
    }

    cout << "\n";
    return 0;
}
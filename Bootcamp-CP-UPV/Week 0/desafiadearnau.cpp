#include <bits/stdc++.h>

using namespace std;
int main()
{
    string texto = "";

    getline(cin, texto);

    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);

    cout << texto << "\n";

    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);

    cout << texto;

    return 0;
}
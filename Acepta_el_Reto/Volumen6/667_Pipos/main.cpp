#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <map>

using namespace std;

struct Node
{
    int value = 0;
};

bool caso()
{
    string ano;

    cin >> ano;

    if (ano.at(0) - '0' == 0)
    {
        return false;
    }

    // Obtine uvas totales
    int uvas[9];
    for (int i = 0; i < 10; i++)
        cin >> uvas[i];

    // Obtien uvas necesarias por año

    map<int, Node> neces;

    for (int i = 0; i < ano.length(); i++)
    {
        neces[ano.at(i) - '0'].value = neces[ano.at(i) - '0'].value + 3;
    }

    int max = -1;
    for (pair<int, Node> it : neces)
    {

        int temp = uvas[it.first] / it.second.value;
        if (temp < max || max == -1)
        {
            max = temp;
        }
    }

    cout << max << "\n";
    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
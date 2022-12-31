#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>

struct Node
{
    int value = 0;
};

using namespace std;

bool caso()
{
    int n;

    cin >> n;

    if (n == 0)
        return false;

    map<int, Node> varas;

    for (int i = 0; i < n; i++)
    {
        int tama;
        cin >> tama;

        varas[tama].value = varas[tama].value + 1;
    }
    cout << "sd";
    for (pair<int, Node> it : varas)
    {

        cout << it.first << "  " << it.second.value;
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
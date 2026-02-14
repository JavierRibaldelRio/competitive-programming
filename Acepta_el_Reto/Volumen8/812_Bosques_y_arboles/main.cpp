#include <bits/stdc++.h>
using namespace std;

void resolver(int vertices, int aristas)
{

    int temp = 0, temp2 = 0, trivial = 0, arbol = 0, ciclo = 0;
    multimap<int, int> aris;

    bool visitados[aristas];
    set<int> todos;
    queue<int> siguiente;
    for (int i = 0; i < aristas; i++)
    {

        cin >> temp >> temp2;

        aris.insert({temp, temp2});
        aris.insert({temp2, temp});
        todos.insert(temp);
        todos.insert(temp2);
    }

    trivial = vertices - todos.size();

    while (!todos.empty())
    {

        auto it = todos.begin();
        visitados[*it];
        siguiente.push(*it);
        todos.erase(it);

        while (!siguiente.empty())
        {
            auto rango = aris.equal_range(siguiente.front());

            for (auto it = rango.first; it != rango.second; ++it)
            {
                if (visitados[rango.second])
                {
                }
            }
        }
    }
}

int main()
{

    unsigned int n, v;

    cin >> n >> v;

    while (cin)
    {
        resolver(n, v);
    }

    return 0;
}
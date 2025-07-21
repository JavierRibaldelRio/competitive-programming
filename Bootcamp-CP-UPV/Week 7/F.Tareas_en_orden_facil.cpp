#include <bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

int main()
{

    unsigned long q;

    ull id;

    // Prioridad, Id

    priority_queue<pair<ull, ull>> que;

    set<ull> realizadas;

    pair<ull, ull> pareja;

    cin >> q;

    char op;

    for (unsigned long i = 0; i < q; i++)
    {

        cin >> op;

        switch (op)
        {
        case '+':

            // Prioridad id
            cin >> pareja.first;
            cin >> pareja.second;

            que.push(pareja);

            break;

        case '-':
            // Es id, no es el pr
            cin >> id;
            cout << id << "\n";
            realizadas.insert(id);
            break;

        case '!':
        {

            do
            {
                pareja = que.top();
                que.pop();
            } while (realizadas.find(pareja.second) != realizadas.end());

            cout << pareja.second << "\n";
            break;
        }
        }
    }

    return 0;
}
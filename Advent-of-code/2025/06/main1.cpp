#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<unsigned long long>> oper;

    unsigned long long toAdd = 0;

    string line;

    for (int i = 0; i < 4; i++)
    {
        oper.push_back({});

        getline(cin, line);

        istringstream iss(line);

        while (iss >> toAdd)
        {
            oper[i].push_back(toAdd);
        }
    }

    char op;

    unsigned long long i = 0;

    unsigned long long tot = 0;

    while (cin >> op)
    {

        if (op == '+')
        {

            tot += oper[0][i] + oper[1][i] + oper[2][i] + oper[3][i];
        }

        else
        {

            tot += oper[0][i] * oper[1][i] * oper[2][i] * oper[3][i];
        }

        i++;
    }

    cout << tot << "\n";

    return 0;
}

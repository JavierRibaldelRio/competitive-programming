#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long toAdd = 0;

    string lines[4];

    for (int i = 0; i < 4; i++)
    {
        getline(cin, lines[i]);
    }

    char op;

    unsigned long long tot = 0, longitud = lines[0].length(), bufferPos = 0, bufferAnt = 0, temp = 0;

    while (cin >> op)
    {
        if (op == '+')
        {
            temp = 0;
        }
        else
        {
            temp = 1;
        }
        bool espacio[] = {false,
                          false,
                          false,
                          false};

        while (!(espacio[0] && espacio[1] && espacio[2] && espacio[3]) && (bufferPos <= longitud))
        {
            for (int i = 0; i < 4; i++)
            {

                espacio[i] = lines[i][bufferPos] == ' ';
            }
            bufferPos++;
        }

        for (int i = 0; i < bufferPos - bufferAnt - 1; i++)
        {
            int pos = bufferAnt + i;
            string n = {lines[0][pos], lines[1][pos], lines[2][pos], lines[3][pos]};

            if (op == '+')
            {
                temp += stoi(n);
            }
            else
            {
                temp *= stoi(n);
            }
        }

        bufferAnt = bufferPos;

        tot += temp;
    }

    cout << tot << "\n";

    return 0;
}

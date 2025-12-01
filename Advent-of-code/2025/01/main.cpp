#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;

    int value = 0,
        cont = 0,
        pos = 50;
    while (cin >> ch)
    {

        int ori = pos;
        cin >>
            value;

        if (ch == 'L')
        {

            pos -= value;

            pos = (pos % 100 + 100) % 100;

            if (ori < pos && pos != 0 && ori != 0)
            {

                cont++;
            }
        }

        else
        {

            pos += value;
            pos = pos % 100;
            if (ori > pos && pos != 0 && ori != 0)
            {

                cont++;
            }
        }

        cont += value / 100;

        if (pos == 0 && ori != 0)
        {
            cont++;
        }

        cout << ori << " → " << ch << value << " → " << pos << " " << cont << "\n ";
    }

    cout << cont << endl;

    return 0;
}
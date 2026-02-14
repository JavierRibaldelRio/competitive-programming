#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned int P, L, A;

    cin >> P >> L >> A;

    while (P != 0 || L != 0 || A != 0)
    {
        int n = 0;
        map<string, bool> gente;
        char c;
        int count = 0;

        for (int i = 0; i < A; i++)
        {
            cin >> n >> c;

            if (!gente[to_string(n) + c])
            {

                gente[to_string(n) + c] = true;
                count++;
            }
        }

        if (count * 2 >= P * L)
            cout << "EMPEZAMOS\n";
        else
            cout << "ESPERAMOS\n";

        cin >> P >> L >> A;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cin

    int n;

    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
    {

        int longi;

        cin >> longi;
        cin >> s;
        int op = 0;

        for (int j = 0; j < s.length() - 3; j++)
        {

            string si = s.substr(j, 4);

            if (si.compare("2026") == 0)
            {
                op = 0;
                break;
            }

            else if (si.compare("2025") == 0)
            {

                op = 1;
            }
        }

        cout << op << endl;
    }

    return 0;
}

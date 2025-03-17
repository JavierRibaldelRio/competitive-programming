#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <utility>

using namespace std;

int main()
{

    int longi;
    cin >> longi;

    while (longi != 0)
    {
        int factibles = 0, longi2 = 2 * longi;
        int timbales[longi2];

        for (int i = 0; i < longi2; i++)
        {
            cin >> timbales[i];
        }

        int platillo = -1, pos = 1;
        cin >> platillo;
        while (platillo != 0)
        {
            while (platillo > timbales[pos] && pos < longi2)
            {
                pos += 2;
            }

            if (platillo < timbales[pos - 1] || pos > longi2)
            {

                factibles++;
            }

            cin >> platillo;
        }
        cout << factibles << "\n";
        cin >> longi;
    }

    return 0;
}
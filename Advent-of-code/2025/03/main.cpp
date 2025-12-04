#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long sumaT = 0;
    unsigned long long ori = 98732422, buscarMax1, buscarMax2;
    while (cin >> ori)
    {
        int longi = (int)log10(ori) + 1;

        buscarMax1 = ori / 10;

        int max1 = -1,
            max2 = -1, p1 = 1, p1max = 1,
            p2 = 0;

        while (p1 < longi)
        {

            int posibleMax = buscarMax1 % 10;

            if (posibleMax >= max1)
            {

                max1 = posibleMax;

                p1max = p1;
            }

            p1++;

            // Next
            buscarMax1 = buscarMax1 / 10;
        }

        buscarMax2 = ori;
        while (p2 < p1max && max2 != 9)
        {

            int posibleMax2 = buscarMax2 % 10;

            if (max2 < posibleMax2)
            {
                max2 = posibleMax2;
            }

            p2++;

            buscarMax2 = buscarMax2 / 10;
        }

        sumaT += max1 * 10 + max2;
    }

    cout << sumaT << "\n";

    return 0;
}

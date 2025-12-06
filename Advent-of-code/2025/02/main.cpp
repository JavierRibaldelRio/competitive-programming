#include <bits/stdc++.h>
using namespace std;

unsigned long long sum = 0;

long long cifras(long long n)
{

    return (n > 0) ? floor(log10(n)) + 1 : 1;
}

bool check(long long n)
{
    long long nCifras = cifras(n);
    long long mCifras = nCifras / 2;

    for (long long i = 1; i <= mCifras; i++)
    {

        if (nCifras % i != 0)
        {
            continue;
        }
        long long ini, seg, val, resu;

        ini = n % (int)pow(10, i);
        val = n / (int)pow(10, i);
        seg = val % (int)pow(10, i);

        resu = seg - ini;

        while (val != 0 && resu == 0)
        {

            // cout << ini << " " << seg << " | ";

            ini = seg;
            val = val / (int)pow(10, i);
            seg = val % (int)pow(10, i);

            if (seg != 0)
            {
                resu = seg - ini;
            }
        }

        if (resu == 0)
        {
            return true;
        }
    }

    return false;
}

void barrer(long long sP, long long max)
{
    while (sP <= max)
    {

        if (check(sP))
        {
            sum += sP;
        }

        sP++;
    }
}

int main()
{
    long long min, max, nCifras;

    char ch;

    while (cin >> min)
    {

        cin >> ch >> max;

        nCifras = cifras(min);
        barrer(min, max);
    }

    cout
        << sum << endl;
    /* code */

    return 0;
}

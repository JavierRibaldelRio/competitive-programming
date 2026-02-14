#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cin

    int n;

    cin >> n;

    int a, b, mi;
    for (int i = 0; i < n; i++)
    {

        cin >> a, b;

        mi = min(a, b);

        for (int j = 0; j < (int)log2(mi); j += 2)
        {

            if (pow(2, j) > mi)
            {

                break;
            }
        }
    }

    return 0;
}

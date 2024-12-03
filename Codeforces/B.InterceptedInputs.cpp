#include <iostream>
#include <algorithm>

using namespace std;

void caso()
{

    int k, tam, n, m;
    cin >> k;

    tam = k - 2;
    int a[k];

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    for (int i = k - 1; i >= 0; i--)
    {
        n = a[i];

        if (tam % n != 0)
        {
            continue;
        }

        int bus = tam / n;

        int *p = find(a, a + k, bus);

        if (p != a + k && p - a != i)
        {

            m = *p;
            break;
        }
    }

    cout << m << " " << n << "\n";
}

int main()
{

    int casos;

    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        caso();
    }

    return 0;
}
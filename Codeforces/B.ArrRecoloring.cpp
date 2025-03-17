#include <iostream>
#include <algorithm>
using namespace std;

void caso()
{

    int n, k;

    cin >> n >> k;
    long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;

    // Si k es uno
    if (k != 1)
    {
        sort(a, a + n);

        int pos = n - 1, left = k + 1;

        while (left > 0)
        {
            sum += a[pos];

            pos--;
            left--;
        }
    }
    else
    {

        sum = max(*max_element(a + 1, a + n - 1) + max(a[0], a[n - 1]), a[0] + a[n - 1]);
    }
    cout << sum << "\n";
}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        caso();
    }

    return 0;
}
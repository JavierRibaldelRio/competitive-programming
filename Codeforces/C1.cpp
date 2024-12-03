#include <iostream>
#include <cmath>

using namespace std;

void caso()
{

    unsigned long m;

    unsigned x;

    cin >> x >> m;

    int count = 0;

    for (unsigned long i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            int y = i ^ x;

            if (y != x && y >= 1 && y <= m)
            {
                count++;
                break;
            }

            if (i != x / i)
            {
                y = x ^ (x / i);
                if (y != x && y >= 1 && y <= m)
                {
                    count++;
                }
            }
        }
    }

    cout << count << "\n";
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
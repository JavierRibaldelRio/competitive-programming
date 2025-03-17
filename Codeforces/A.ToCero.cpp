#include <iostream>

using namespace std;

void caso()
{

    unsigned int n, k;
    cin >> n >> k;

    unsigned int count = 0;

    while (n > k)
    {
        if (n % 2 == 0)
        {
            count += n / (k - 1);

            n %= (k - 1);
        }
        else
        {

            n -= k;
            count++;
        }
    }
    if (n != 0)
    {
        count++;
    }

    cout << count << "\n";
}

int main()
{

    unsigned int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        caso();
    }

    return 0;
}
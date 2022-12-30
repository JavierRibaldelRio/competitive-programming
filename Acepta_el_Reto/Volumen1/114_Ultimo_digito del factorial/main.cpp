#include <iostream>

using namespace std;

int factorial(int n)
{
}

void caso()
{

    int n;
    cin >> n;

    if (n > 4)
        n = 0;

    else if (n == 0)
        n = 1;

    else if (3 == n)
        n = 6;

    cout << n << '\n';
}

int main()
{

    int c;

    cin >> c;

    while (c > 0)
    {
        caso();
        c--;
    }

    return 0;
}
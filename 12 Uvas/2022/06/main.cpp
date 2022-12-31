#include <iostream>

using namespace std;

int f = 0;
long recur(long n, long a, int i)
{
    if (f == i)
        return n;

    else
        return recur(n - a, n, i + 1);
}

bool caso()
{
    long a, b;

    cin >> a >> b >> f;

    if (a == 0 && b == 0 && f == 0)
        return false;

    if (f == 0 || f == 1)
    {
        long d[2] = {a, b};

        cout << d[f] << "\n";
    }
    else
        cout << recur(b, a, 1) << "\n";

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
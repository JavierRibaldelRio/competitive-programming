#include <bits/stdc++.h>

using namespace std;

int arepacci(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    return arepacci(n - 1) + arepacci(n - 2);
}

int main()
{

    int n;

    cin >> n;

    cout << arepacci(n) << "\n";

    return 0;
}
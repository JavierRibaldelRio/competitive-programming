#include <bits/stdc++.h>

using namespace std;

int bolasTriangulo(int n)
{
    if (n == 1)
    {
        return n;
    }

    return n + bolasTriangulo(n - 1);
}

int main()
{

    int n;

    cin >> n;

    cout << bolasTriangulo(n) << "\n";

    return 0;
}
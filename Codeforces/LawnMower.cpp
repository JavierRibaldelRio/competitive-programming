#include <bits/stdc++.h>
using namespace std;

void resolver()
{

    unsigned int n, w;

    cin >> n >> w;

    cout << (n - n / w) << "\n";
}

int main()
{

    unsigned int t;

    cin >> t;

    for (unsigned int i = 0; i < t; i++)
    {

        resolver();
    }

    return 0;
}
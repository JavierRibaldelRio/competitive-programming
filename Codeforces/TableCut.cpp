#include <bits/stdc++.h>
using namespace std;

void resolver()
{

    unsigned int n, m;

    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
        }
    }
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
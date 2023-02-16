#include <iostream>

using namespace std;

bool caso()
{

    int n;

    cin >> n;

    if (!cin)
    {
        return false;
    }

    unsigned long long vel = 0;
    for (int i = 0; i < n; i++)
    {

        unsigned long long temp;

        cin >> temp;

        if (temp > vel)
        {

            vel = temp;
        }
    }

    cout << vel <<"\n";
    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
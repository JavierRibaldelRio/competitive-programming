#include <iostream>

using namespace std;

void caso()
{

    unsigned int n;

    cin >> n;

    cout << n / 100 << "\n";
}

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        caso();
    }

    return 0;
}

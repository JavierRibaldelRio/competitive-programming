#include <iostream>

using namespace std;

void caso()
{
    int n;

    cin >> n;

    if (n > 0)
    {
        n--;
    }

    cout << n << "\n";
}

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        caso();
    }

    return 0;
}
#include <iostream>

using namespace std;

void caso()
{
    unsigned long n;
    cin >> n;

    int sig = n / 100 + 1;

    if (n % 100 == 0)
    {

        sig--;
    }

    cout << sig << "\n";
}

int main()
{

    unsigned long n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        caso();
    }

    return 0;
}
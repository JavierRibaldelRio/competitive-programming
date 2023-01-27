#include <iostream>

using namespace std;

void func()
{

    long long n, suma = 0, ant = 0;

    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        ant = ant + i + 1;
        suma += ant;
    }
    cout << suma << "\n";
}

int main()
{
    int vuel;

    cin >> vuel;

    for (int i = 0; i < vuel; i++)
    {
        func();
    }
    return 0;
}

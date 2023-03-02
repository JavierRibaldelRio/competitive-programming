#include <iostream>

using namespace std;

void caso()
{
    unsigned long long vueltas, ori;

    cin >> vueltas;
    ori = vueltas;
    while ((vueltas / 3600) >= 1)
    {
        ori++;
        vueltas++;

        vueltas -= 3600;
    }

    cout << ori << "\n";
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

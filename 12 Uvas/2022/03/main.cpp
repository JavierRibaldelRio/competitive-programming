#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

void convArr(int arr[3], string str)
{
    string str_es = ".";

    for (int i = 0; i < 2; i++)
    {
        int pos = str.find(str_es);
        arr[i] = atoi(str.substr(0, pos).c_str());

        str.erase(0, pos + 1);
    }

    arr[2] = atoi(str.c_str());
}

bool comparar(int a[3], int b[3])
{

    if (a[0] == b[0])
    {

        if ((a[1] == b[1] && a[2] + 1 == b[2]) || (a[1] + 1 == b[1] && b[2] == 0))
        {
            return true;
        }
    }
    else if (a[0] + 1 == b[0] && b[1] == 0 && b[2] == 0)
    {
        return true;
    }

    return false;
}
void caso()
{
    string a, b;
    cin >> a >> b;

    int aA[3], aB[3];

    convArr(aA, a);

    convArr(aB, b);

    if (comparar(aA, aB) == true)

        cout << "SI\n";

    else
        cout
            << "NO\n";
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
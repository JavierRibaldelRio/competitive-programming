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

    for (int i = 0; i < 3; i++)
    {

        if (a[i] + 1 == b[i])
        {

            for (int j = i + 1; j < 3; j++)
            {
                if (b[j] != 0)
                {
                    return false;
                }
            }

            return true;
        }

        if (a[i] > b[i])
        {
            return false;
        }
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
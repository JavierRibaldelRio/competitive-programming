#include <iostream>
#include <string>

using namespace std;

void caso()
{

    string ninyos;

    cin >> ninyos;

    int minutosExtra = ninyos.length() / 2;

    for (int i = 0; i < ninyos.length(); i = i + 2)
    {

        if (ninyos.at(i) == ninyos.at(i + 1))
        {

            minutosExtra++;
        }
    }

    cout << minutosExtra << "\n";
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
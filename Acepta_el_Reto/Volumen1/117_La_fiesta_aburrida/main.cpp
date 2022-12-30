#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n = 0;
    cin >> n;

    while (n != 0)
    {
        string name, na;
        cin >> na >> name;
        cout << "Hola, " << name << ".\n";
        n--;
    }

    return 0;
}
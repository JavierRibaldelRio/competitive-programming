#include <iostream>
#include <string>

using namespace std;
bool caso()
{
    string s;

    cin >> s;
    if (!cin)
    {

        return false;
    }

    for (int i = 0; i < s.length(); i = i + 2)
    {

        int n = (s.at(i) - '0') * 10 + (s.at(i + 1) - '0');

        if (n < 32)
        {
            n = n * 10 + (s.at(i + 2) - '0');

            i++;
        }

        cout << (char)n;
    }

    cout << "\n";
    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
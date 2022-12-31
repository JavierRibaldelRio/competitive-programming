#include <iostream>
#include <string>
#include <vector>

using namespace std;

void calambur(string str, vector<char> &vec)
{

    for (long i = 0; i < str.length(); i++)
    {
        char n = str.at(i);

        if (int(n) > 64 && int(n) < 91)
            n = n + 32;

        if (int(n) > 96 && int(n) < 123)
        {
            vec.push_back(n);
        }
    }
}

void caso()
{
    string a, b;

    getline(cin, a);
    getline(cin, b);

    vector<char> v_a;
    vector<char> v_b;

    calambur(a, v_a);
    calambur(b, v_b);

    if (v_a == v_b)
    {
        cout << "SI\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int c;
    cin >> c;
    cin.ignore(256, '\n');

    for (int i = 0; i < c; i++)
    {
        caso();
    }

    return 0;
}
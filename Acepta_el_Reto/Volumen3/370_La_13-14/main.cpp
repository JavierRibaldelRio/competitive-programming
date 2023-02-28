#include <iostream>
#include <algorithm>
using namespace std;

void caso()
{
    string s;
    cin >> s;

    int n[] = {0, 0};
    int pos = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s.at(i);

        if (ch != '-')
        {
            n[pos] = n[pos] * 10 + s.at(i) - '0';
        }
        else
        {
            pos++;
        }
    }

    sort(n, n + 2);

    if (n[0] % 2 == 0 && n[0] + 1 == n[1])
    {
        cout << "SI\n";
    }
    else
    {
        cout << "NO\n";
    }
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
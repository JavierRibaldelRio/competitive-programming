#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long n = 0;
    deque<char> dir;
    unordered_map<char, char> op;

    op['R'] = 'L';
    op['L'] = 'R';
    op['F'] = 'B';
    op['B'] = 'F';

    char nueva; // F - R - B -L

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> nueva;

        if (!dir.empty() && op[dir.back()] == nueva)
        {
            dir.pop_back();
        }
        else
        {
            dir.push_back(nueva);
        }
    }

    if (!dir.empty())
    {
        cout << dir.front();
        dir.pop_front();
    }
    while (!dir.empty())
    {
        cout << " " << dir.front();
        dir.pop_front();
    }

    return 0;
}
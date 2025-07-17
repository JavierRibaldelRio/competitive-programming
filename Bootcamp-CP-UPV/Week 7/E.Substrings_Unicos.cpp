#include <bits/stdc++.h>

using namespace std;

int main()
{

    string text;
    int k;
    set<string> tot;

    getline(cin, text);

    cin >> k;

    int l = text.length() - k + 1;

    for (int i = 0; i < l; i++)
    {
        tot.insert(text.substr(i, k));
    }

    cout << tot.size();
    return 0;
}
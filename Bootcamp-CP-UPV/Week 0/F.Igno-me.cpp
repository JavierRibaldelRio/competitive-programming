#include <bits/stdc++.h>

using namespace std;
int main()
{
    string ignorar, l2, l3;

    double dec;

    cin >> dec >> ignorar;
    cin.ignore();
    getline(cin, l2);
    cin >> l3;

    cout << l2 << ": " << setprecision(3) << fixed << round(dec * 1000) / 1000 << '\n'
         << l3;

    return 0;
}
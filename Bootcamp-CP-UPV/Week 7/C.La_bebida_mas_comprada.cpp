#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, id;

    cin >> n;

    // ID, recuento
    map<unsigned long long, unsigned long long> m;

    for (unsigned long i = 0; i < n; i++)
    {

        cin >> id;

        m[id]++;
    }

    auto maxi = std::max_element(
        std::begin(m), std::end(m),
        [](const pair<unsigned long long, unsigned long long> &p1, const pair<unsigned long long, unsigned long long> &p2)
        {
            return p1.second < p2.second;
        });

    cout << maxi->first << '\n';
}

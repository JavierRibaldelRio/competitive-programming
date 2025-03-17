#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <utility>
#include <set>

using namespace std;

int main()
{

    int longi;
    cin >> longi;

    while (longi != 0)
    {
        set<int> conjunto;
        map<int, int> lasPost;
        map<int, int> primPosi;

        for (int i = 1; i < longi + 1; i++)
        {
            int n;
            cin >> n;
            conjunto.insert(n);

            // Si es la primera vez la añade
            if (primPosi.find(n) == primPosi.end())
            {
                primPosi[n] = i;
            }

            lasPost[n] = i;
        }

        int difuminacion = 0;
        for (pair<int, int> p : primPosi)
        {
            difuminacion += lasPost[p.first] - p.second;
        }

        cout << difuminacion << "\n";
        cin >> longi;
    }
    return 0;
}
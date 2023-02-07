#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool caso()
{
    int np;

    cin >> np;

    if (np == 0)
    {
        return false;
    }

    vector<int> vec;

    for (int i = 0; i < np; i++)
    {

        int nc;

        vector<int> carriles;

        cin >> nc;

        for (int j = 0; j < nc; j++)
        {

            int tama;

            cin >> tama;

            carriles.push_back(tama);
        }

        vec.push_back(*max_element(carriles.begin(), carriles.end()));
    }

    cout << *min_element(vec.begin(), vec.end()) << "\n";

    return true;
}

int main()
{
    while (caso())
    {
    }

    return 0;
}
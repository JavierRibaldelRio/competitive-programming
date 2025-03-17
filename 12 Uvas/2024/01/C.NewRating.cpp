#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int origen, n;
    cin >> origen >> n;

    while (origen != 0 || n != 0)
    {

        cout << "[" << origen + 74 * n << " .. " << origen + 79 * n << "]\n";
        cin >> origen >> n;
    }
    return 0;
}
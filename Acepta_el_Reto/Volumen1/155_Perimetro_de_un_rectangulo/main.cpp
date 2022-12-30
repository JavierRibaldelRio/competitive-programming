#include <iostream>
#include <string>

using namespace std;

int main()
{

    int x, y;

    while (true)
    {
        cin >> x >> y;

        if (x < 0 || y < 0)
            return 0;
        cout << x * 2 + y * 2 << "\n";
    }
}
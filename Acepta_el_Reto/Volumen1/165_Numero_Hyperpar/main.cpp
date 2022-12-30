#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;

    while (true)
    {
        cin >> n;

        if (n > -1)
        {
            while (n)
            {
                if (n % 2 == 1)
                    break;

                n /= 10;
            }

            if (n)
                cout << "NO\n";
            else
                cout << "SI\n";
        }

        else
            return 0;
    }
}
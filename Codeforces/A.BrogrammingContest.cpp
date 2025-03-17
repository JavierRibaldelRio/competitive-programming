#include <iostream>
#include <string>

using namespace std;

void caso()
{

    unsigned int len = 0, movi = 0;

    string s;

    cin >> len >> s;

    // at Zero
    bool atZ = true;

    for (int i = 0; i < len; i++)
    {

        if (s[i] == '0')
        {
            if (atZ)
            {
                continue;
            }
            else
            {
                movi++;
                atZ = !atZ;
            }
        }
        // s[i] == 1
        else
        {
            if (atZ)
            {

                movi++;
                atZ = !atZ;
            }
            else
            {
                continue;
            }
        }
    }

    cout << movi << "\n";
}

int main()
{

    int t = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        caso();
    }

    return 0;
}
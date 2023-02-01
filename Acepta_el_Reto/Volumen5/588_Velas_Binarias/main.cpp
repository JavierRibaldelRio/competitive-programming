#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool caso()
{
    int n;

    cin >> n;

    if (n == 0)
    {
        return false;
    }

    vector<int> bin;

    string str(bin.begin(), bin.end());
    cout << str << endl;

    vector<int>
        binRev;

    while (n != 0)
    {

        int s = n % 2;
        bin.push_back(s);

        binRev.push_back(s);

        n /= 2;
    }

    reverse(binRev.begin(), binRev.end());

    for(int i = 0; i < )

    if (bin == binRev)
    {

        cout << "SI\n";
    }
    else
    {

        cout << "NO\n";
    }

    return true;
}

int main()
{

    while (caso())
    {
    }

    return 0;
}
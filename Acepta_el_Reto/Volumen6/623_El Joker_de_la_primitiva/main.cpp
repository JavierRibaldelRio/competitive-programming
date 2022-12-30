#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void caso()
{

    int uno, dos;
    cin >> uno >> dos;
    vector<int> v_2;

    vector<int> v_1;

    for (int i = 0; i < 7; i++)
    {

        v_1.push_back(uno % 10);

        uno /= 10;

        v_2.push_back(dos % 10);

        dos = dos / 10;
    }

    sort(v_1.begin(), v_1.end());
    sort(v_2.begin(), v_2.end());

    if (v_1 == v_2)
        cout << "GANA\n";
    else
        cout << "PIERDE\n";
}

int main()
{
    int c;

    cin >> c;

    for (int i = 0; i < c; i++)
        caso();
    return 0;
}
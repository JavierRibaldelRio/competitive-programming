#include <iostream>
#include <string>

using namespace std;

int main()
{

    int meses[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int dia, mes;
        cin >> dia >> mes;
        cout << 365 - dia - meses[mes] << "\n";
    }
    return 0;
}
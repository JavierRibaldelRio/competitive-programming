#include <iostream>
#include <map>
#include <utility>

using namespace std;

struct Node
{

    int value = 0;
};

bool caso()
{

    unsigned long long n;

    cin >> n;

    if (n == 0)
    {

        return false;
    }

    map<int, Node> data;
    for (int i = 0; i < n; i++)
    {
        int num;

        cin >> num;

        data[num].value++;
    }

    pair<int, int> max;

    max.second = 0;

    for (pair<int, Node> p : data)
    {

        if (p.second.value > max.second)
        {

            max.first = p.first;

            max.second = p.second.value;
        }
    }

    cout << max.first << "\n";

    return true;
}

int main()
{

    while (caso())
    {
        /* code */
    }
}
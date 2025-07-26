#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Nodo
{

    string s;
    bool num;
    int n;
    Nodo *next;
};

int main()
{

    unsigned int millon = 1000001;

    Nodo *head = new Nodo();

    unordered_map<unsigned int, Nodo *> index;

    head->s = "1";
    head->n = 1;
    head->num = true;

    Nodo *pos = head;
    index[1] = head;

    // Definición de la lista
    for (int i = 2; i < millon; i++)
    {
        pos->next = new Nodo();
        pos = pos->next;
        pos->s = to_string(i);
        pos->num = true;
        pos->n = i;

        index[i] = pos;
    }

    int q = 0, n;
    cin >> q;

    char op;
    string s;

    for (int i = 0; i < q; i++)
    {
        // Reinicia posición de búsqueda
        pos = head;
        cin >> op;

        switch (op)
        {
        case '+':
        {
            cin >> n >> s;

            pos = index[n];

            Nodo *temp = new Nodo();

            temp->s = s;
            temp->num = false;
            temp->next = pos->next;

            pos->next = temp;

            break;
        }
        case '-':
        {

            Nodo *ant = nullptr;

            cin >> n;
            unsigned int tempPos = n - 1;

            while (tempPos > 0 && index.find(tempPos) == index.end())
            {
                tempPos--;
            }

            if (tempPos > 0)
            {
                ant = index[tempPos];
                pos = ant->next;
            }

            while (!pos->num || pos->n != n)
            {
                ant = pos;
                pos = pos->next;
            }

            // ant es el que va antes que el primero a a eliminar

            do
            {
                pos = pos->next;
            } while (pos != nullptr && !pos->num);

            if (ant == nullptr)
            {

                head = pos;
            }
            else
            {
                ant->next = pos;
            }

            index.erase(n);

            break;
        }
        }
    }

    while (head != nullptr)
    {

        cout << head->s << "\n";
        head = head->next;
    }

    return 0;
}

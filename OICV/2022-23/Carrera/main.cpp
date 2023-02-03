#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct resultado
{

    bool ganador;

    int casillaFinal;
    int cartasRobadas;
};

// Comprueba el si alguien gana, con cuantas cartas// INputs: nº cartas baraja,
resultado jugar1(int b, int c, vector<string> mazo, char *tablero)
{

    // Posición, almacena la actual
    int pos = -1;
    for (int i = 0; i < b; i++)
    {
        // Repite por la longitud de la carta del mazo
        for (int k = 0; k < mazo[i].length(); k++)
        {
            for (int j = pos + 1; j < c; j++)
            {

                if (tablero[j] == mazo[i].at(0) || j == c - 1)
                {
                    pos = j;
                    break;
                }
            }
        }

        if (c == pos + 1)
        {
            resultado salida;

            salida.casillañFinal = pos + 1;

            salida.cartasRobadas = i + 1;

            salida.ganador = true;

            return salida;
        }
    }

    resultado salida;

    salida.casillaFinal = pos + 1;

    salida.cartasRobadas = b;

    salida.ganador = false;

    return salida;
}

bool caso()
{
    int n, c, b;

    cin >> n >> c >> b;

    if (n == 0)
    {
        return false;
    }
    // Coge el tablero
    string s_tablero;

    cin >> s_tablero;

    char tablero[c];

    for (int i = 0; i < c; i++)
    {

        tablero[i] = s_tablero.at(i);
    }

    // Coge las cartas
    vector<string> mazo(b);

    for (int i = 0; i < b; i++)
    {

        string s;
        cin >> s;
        mazo[i] = s;
    }
    // 1 jugador
    if (n == 1)
    {

        resultado salida = jugar1(b, c, mazo, tablero);

        cout << salida.cartasRobadas << " " << salida.casillaFinal << "\n";
    }
    else
    {
        // Añade cartas falsas hasta que hay para todos
        while (b % n != 0)
        {
            mazo.push_back("0");
            b++;
        }

        vector<vector<string>> cartasPorJugador(n);

        int pos = 0, cont = 0;

        // Hace un reparto de cartas en mini mazos
        while (pos < b / n)
        {

            for (int i = 0; i < n; i++)
            {
                cartasPorJugador[i].push_back(mazo[cont]);
                cont++;
            }
            pos++;
        }

        resultado ganador;

        ganador.cartasRobadas = 201;

        int nG = -1;
        for (int i = 0; i < n; i++)
        {

            resultado salida = jugar1(cartasPorJugador[i].size(), c, cartasPorJugador[i], tablero);

            salida.cartasRobadas = salida.cartasRobadas * n - (n - i) + 1;

            if (ganador.cartasRobadas > salida.cartasRobadas && salida.ganador == true)
            {

                ganador = salida;

                nG = i;
            }
        }
        if (nG == -1)
        {

            cout << "Nadie gana con " << b << " cartas.\n";
        }

        else
        {
            cout << "El jugador " << nG + 1 << " gana con " << ganador.cartasRobadas
                 << " cartas.\n";
        }
    }

    return true;
}

int main()
{
    while (caso())
    {
        /* code */
    }

    return 0;
}
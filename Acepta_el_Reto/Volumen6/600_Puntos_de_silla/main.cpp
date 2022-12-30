#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Hace la segunda comprobación
bool comprobar2(bool buscarMax, int index, int filas, int columnas, int pos, vector<vector<int>> arr)
{

	int colu[filas];
	for (int k = 0; k < filas; k++)
	{

		colu[k] = arr[k][pos];
	}

	int *tope;

	if (buscarMax)
	{

		tope = max_element(colu, colu + filas);
	}
	else
	{
		tope = min_element(colu, colu + filas);
	}

	return index == *tope;
};

string tienePuntosSilla(vector<vector<int>> vec, int filas, int columnas)
{

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if (vec[i][j] == *min_element(vec[i].begin(), vec[i].end()))
			{
				if (comprobar2(true, vec[i][j], filas, columnas, j, vec))
					return "SI\n";
			}

			else if (vec[i][j] == *max_element(vec[i].begin(), vec[i].end()))
			{
				if (comprobar2(false, vec[i][j], filas, columnas, j, vec))
					return "SI\n";
			}
		}
	}

	return "NO\n";
}

bool casoPrueba()
{
	int filas = 1;
	int columnas = 1;

	cin >> filas >> columnas;

	if (filas == 0 || columnas == 0)
	{
		return false;
	}

	string input;

	vector<vector<int>> vec(filas, vector<int>(columnas));
	cin.sync_with_stdio(false);
	// cin.tie(nullptr);
	for (int i = 0; i < filas; ++i)
	{

		for (int j = 0; j < columnas; ++j)
		{
			// vec[i][j] = input[j * 2] - '0';

			cin >> vec[i][j];
		}
	}
	cout << tienePuntosSilla(vec, filas, columnas);
	return true;
}

int main()
{
	while (casoPrueba())
	{
	}

	return 0;
}

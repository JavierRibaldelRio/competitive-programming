// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int obtenerNumero(int, int);

// int pasar_vector_numero(vector<int>);

// int main()
// {

//     int casos = 0;

//     cin >> casos;

//     for (int i = 0; i < casos; i++)
//     {
//         int caso = 0;
//             cin >> caso;
//         cout << obtenerNumero(caso, 0) << endl;
//     }

//     return 0;
// }

// int obtenerNumero(int numero, int vuelta)
// {

//     if (numero == 6174)
//     {
//         return vuelta;
//     }

//     vuelta++;

//     vector<int> numero_cifras(4);

//     for (int i = 0; i < 4; i++)
//     {

//         numero_cifras[i] = numero % 10;

//         numero = numero / 10;
//     }

//     // Comprueba que todos los números no sean inguales

//     int suma = 0;
//     for (int num : numero_cifras)
//     {
//         suma += num;
//     }

//     if (suma == numero_cifras[0] * 4)
//     {
//         return 8;
//     }

//     sort(numero_cifras.begin(), numero_cifras.end());

//     int menor = pasar_vector_numero(numero_cifras);

//     reverse(numero_cifras.begin(), numero_cifras.end());

//     int mayor = pasar_vector_numero(numero_cifras);

//     return obtenerNumero(mayor - menor, vuelta);
// }

// int pasar_vector_numero(vector<int> vec)
// {

//     int salida = 0;

//     for (int n : vec)
//     {

//         salida = salida * 10 + n;
//     }

//     return salida;
// }
#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;

int iteracionesKaprekar(string numero) {
	if (numero == "6174") return 0;
	else {
		sort(numero.begin(), numero.end());
		int menorAMayor = stoi(numero);
		sort(numero.begin(), numero.end(), greater<int>());
		int mayorAMenor = stoi(numero);
		string resta = to_string(mayorAMenor - menorAMayor);
		while (resta.size() < 4) {
			resta = "0" + resta;
		}
		return 1 + iteracionesKaprekar(resta);
	}
}

int main() {
	//cin.sync_with_stdio(false);
	//cin.tie(nullptr);
	int numcasos;
	cin >> numcasos;
	for (int i = 0; i < numcasos; ++i) {
		string numero;
		cin >> numero;
		while (numero.size() < 4) {
			numero = "0" + numero;
		}
		unordered_set<char> digitos;
		for (char digito : numero) digitos.insert(digito);
		if (digitos.size() == 1) cout << "8\n";
		else cout << iteracionesKaprekar(numero) << '\n';

	}
	return 0;
}
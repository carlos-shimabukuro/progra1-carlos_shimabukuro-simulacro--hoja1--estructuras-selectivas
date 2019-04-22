// ConsoleApplication40.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese las coordenadas X e Y de un Punto: 5 7
El punto se encuentra en el PRIMER CUADRANTE
*/
int main()
{
	// variables
	float x, y;

	// datos de entrada
	cout << "Ingrese cooredenadas X y Y" << endl;
	cin >> x >> y;

	//logica
	if ((0 < x) && (0 < y))
	{
		cout << "El punto se encuentra en el Primer Cuadrante" << endl;
	}
	else
	{
		if ((x < 0 ) && (0 < y))
		{
			cout << "El punto se encuentra en el Segundo Cuadrante" << endl;
		}
		else
		{
			if ((x < 0) && (y < 0))
			{
				cout << "El punto se encuentra en el Tercer Cuadrante" << endl;
			}
			else
			{
				if ((0 < x) && (y < 0))
				{
					cout << "El punto se encuentra en el Cuarto Cuadrante" << endl;
				}
				else
				{
					cout << "El punto se encuentra en el eje 'x' o en el eje 'y'" << endl;
				}
			}
		}
	}

	system("pause");
	return 0;
}




// ConsoleApplication48.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el número de computadoras a comprar: 10
El costo es de $7600.0 y el total aplicando el descuento de $3040.0 es de $4560.0
*/

int main()
{
	// variables
	int numeroC;
	float descuento1 = 0.9, descuento2 = 0.8, descuento3 = 0.6, costoF, costoB;

	// datos de entrada
	cout << "Ingrese el numero de computadoras a comprar : " << endl;
	cin >> numeroC;

	//logica
	if (0 <= numeroC)
	{
		costoB = numeroC * 760;
		if (numeroC < 5)
		{
			costoF = costoB * descuento1;
		}
		else
		{
			if ((5 <= numeroC) && (numeroC < 10))
			{
				costoF = costoB * descuento2;
			}
			else
			{
				if (10 <= numeroC)
				{
					costoF = costoB * descuento3;
				}
			}
		}
		costoB = numeroC * 760;
		cout << "El costo es de : " << costoB << endl;
		cout << "El descuento es de : " << costoB - costoF << endl;
		cout << endl;
		cout << "El costo final es de : " << costoF << endl;
	}
	else
	{
		cout << " Datos invalidos" << endl;
	}

	//datos de salida

	system("pause");
	return 0;
}

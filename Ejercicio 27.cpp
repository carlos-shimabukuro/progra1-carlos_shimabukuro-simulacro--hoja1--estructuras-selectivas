// ConsoleApplication51.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el número de cursos: 10
Ingrese el número ciclo a cursar: 9
El costo es de $ 1271.00
*/
int main()
{
	// variables
	int numeroC, ciclo;
	float descuento1 = 0.90, descuento2 = 0.85, descuento3 = 0.83, descuento4 = 0.82, costo, costoF;

	// datos de entrada
	cout << "Ingrese el numero de cursos : " << endl;
	cin >> numeroC;
	cout << "Ingrese el ciclo a cursar : " << endl;
	cin >> ciclo;
	cout << endl;

	//logica
	if ((0 < numeroC) && (1 <= ciclo) && (ciclo <= 10))
	{
		if ((1 <= ciclo) && (ciclo <= 3))
		{
			costo = 155.00 * descuento1;
		}
		else
		{
			if ((4 <= ciclo) && (ciclo <= 6))
			{
				costo = 155.00 * descuento2;
			}
			else
			{
				if ((7 <= ciclo) && (ciclo <= 8))
				{
					costo = 155.00 * descuento3;
				}
				else
				{
					if ((9 <= ciclo) && (ciclo <= 10))
					{
						costo = 155.00 * descuento4;
					}
				}
			}
		}

		costoF = costo * numeroC;
		cout << "El costo es de : $" << costoF << endl;

	}
	else
	{
		cout << "Los valores introducidos son incorrectos" << endl;
	}

	
	system("pause");
	return 0;
}
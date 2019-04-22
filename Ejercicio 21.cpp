// ConsoleApplication45.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el monto del préstamo en $: 7560
El monto total a pagar es de $ 7711.20
*/

int main()
{
	// variables
	float montoC, interes;

	// datos de entrada
	cout << "Ingrese el monto del prestamo en $ : " << endl;
	cin >> montoC;

	//logica
	if (0 < montoC)
	{
		if (montoC < 5000)
		{
			interes = 0.03;         
		}
		else
		{
			if ((5000 <= montoC) && (montoC < 10000))
			{
				interes = 0.02;
			}
			else
			{
				interes = 0.01;
			}
		}
		cout << "El monto total a pagar es de : $" << (montoC + (montoC * interes)) << endl;
	}
	else
	{
		cout << "Monto invalido" << endl;
	}


	//datos de salida

	system("pause");
	return 0;
}

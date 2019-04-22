// ConsoleApplication50.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese la edad del espectador: 18
El tipo de la entrada es “Entrada 2” y el costo es de $11.25
*/
int main()
{
	// variables
	int edad;
	float entrada1 = 0.65, entrada2 = 0.75, entrada3 = 0.90, entrada4 = 0.78, entrada5 = 0.50, precioF;

	// datos de entrada
	cout << "Ingrese la edad del espectador : " << endl;
	cin >> edad;
	cout << endl;

	//logica
	if ((4 <= edad) && (edad <= 110))
	{
		if ((5 <= edad) && (edad <= 14))
		{
			precioF = 15 * entrada1;
			cout << "El tipo de entrada es 'Entrada 1'" << endl;
		}
		else
		{
			if ((15 <= edad) && (edad <= 19))
			{
				precioF = 15 * entrada2;
				cout << "El tipo de entrada es 'Entrada 2'" << endl;
			}
			else
			{
				if ((20 <= edad) && (edad <= 45))
				{
					precioF = 15 * entrada3;
					cout << "El tipo de entrada es 'Entrada 3'" << endl;
				}
				else
				{
					if ((46 <= edad) && (edad <= 65))
					{
						precioF = 15 * entrada4;
						cout << "El tipo de entrada es 'Entrada 4'" << endl;
					}
					else
					{
						if (66 <= edad)
						{
							precioF = 15 * entrada5;
							cout << "El tipo de entrada es 'Entrada 5'" << endl;
						}
					}
				}
			}
		}

		cout << "El costo de la entrada es de : $" << precioF << endl;
	}
	else
	{
		cout << "El valor introducido es incorrecto" << endl;
	}
	//datos de salida

	system("pause");
	return 0;
}
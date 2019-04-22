// ConsoleApplication54.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingresa tu dia de nacimiento: 10
Ingresa tu mes de nacimiento: 1
Ingresa tu año de nacimiento: 1987
Tu color es: Morado
*/
int main()
{
	// variables
	int diaN, mesN, anioN;
	bool parA, parD;

	// datos de entrada
	cout << "Ingrese tu dia de nacimiento : " << endl;
	cin >> diaN;
	cout << "Ingrese tu mes de nacimiento (Enero = 1, Febrero = 2 ...) : " << endl;
	cin >> mesN;
	cout << "Ingrese tu anio de nacimiento : " << endl;
	cin >> anioN;
	cout << endl;

	//logica
	parA = (anioN % 2 == 0);
	parD = (diaN % 2 == 0);

	switch (parA)
	{
	case 1:
		if ((1 <= mesN) && (mesN <= 3))
		{
			if (parD == 1)
			{
				cout << "Tu color es : ROJO" << endl;
			}
			else
			{
				cout << "Tu color es : CELESTE" << endl;
			}
		}
		else
		{
			if ((4 <= mesN) && (mesN <= 6))
			{
				if (parD == 1)
				{
					cout << "Tu color es : NARANJA" << endl;
				}
				else
				{
					cout << "Tu color es : VERDE" << endl;
				}
			}
			else
			{
				if ((7 <= mesN) && (mesN <= 9))
				{
					if (parD == 1)
					{
						cout << "Tu color es : MARRON" << endl;
					}
					else
					{
						cout << "Tu color es : FUCSIA" << endl;
					}
				}
				else
				{
					if ((10 <= mesN) && (mesN <= 12))
					{
						if (parD == 1)
						{
							cout << "Tu color es : VIOLETA" << endl;
						}
						else
						{
							cout << "Tu color es : ROSADO" << endl;
						}
					}
				}
				
			}
		}
		break;
	case 0:
		if ((1 <= mesN) && (mesN <= 3))
		{
			if (parD == 1)
			{
				cout << "Tu color es : MORADO" << endl;
			}
			else
			{
				cout << "Tu color es : NEGRO" << endl;
			}
		}
		else
		{
			if ((4 <= mesN) && (mesN <= 6))
			{
				if (parD == 1)
				{
					cout << "Tu color es : TURQUESA" << endl;
				}
				else
				{
					cout << "Tu color es : GRIS" << endl;
				}
			}
			else
			{
				if ((7 <= mesN) && (mesN <= 9))
				{
					if (parD == 1)
					{
						cout << "Tu color es : AZUL" << endl;
					}
					else
					{
						cout << "Tu color es : AMARILLO" << endl;
					}
				}
				else
				{
					if ((10 <= mesN) && (mesN <= 12))
					{
						if (parD == 1)
						{
							cout << "Tu color es : OLIVO" << endl;
						}
						else
						{
							cout << "Tu color es : BLANCO" << endl;
						}
					}
				}

			}
		}
		break;
	default:
		cout << "Valores incorrectos" << endl;
		break;
	}

	system("pause");
	return 0;
}

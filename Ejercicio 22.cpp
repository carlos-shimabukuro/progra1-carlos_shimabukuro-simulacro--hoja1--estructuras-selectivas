// ConsoleApplication46.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese zona (1 – 2): 2
Ingrese consumo: 245
El monto a pagar es: 156.5 soles
*/
int main()
{
	// variables
	int zona;
	float consumo, tarifaF1 = 50, tarifaF2 = 25, costo;	

	// datos de entrada
	cout << "Ingrese zona (1 - 2) : " << endl;	
	cin >> zona;
	cout << "Ingrese consumo : " << endl;
	cin >> consumo;

	//logica
	if ((1 <= zona) && (zona <= 2) && (0 <= consumo))
	{
		if (zona == 1)
		{
			if (consumo <= 100)
			{
				costo = tarifaF1 + (consumo * 0.75);
			}
			else
			{
				if (100 <= consumo)
				{
					costo = (tarifaF1 + 75) + ((consumo - 100) * 0.9);
				}
			}
		}
		else
		{
			if (zona == 2)
			{
				if (consumo <= 100)
				{
					costo = tarifaF2 + (consumo * 0.3);
				}
				else
				{
					if (100 <= consumo)
					{
						costo = (tarifaF2 + 30) + ((consumo - 100) * 0.7);
					}
				}
			}
		}

		//datos de salida
		cout << "El monto a pagar es : " << costo << endl;
	}
	else
	{
		cout << "Datos invalidos" << endl;
	}


	system("pause");
	return 0;
}

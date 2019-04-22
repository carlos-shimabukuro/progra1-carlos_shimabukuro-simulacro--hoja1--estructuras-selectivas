// ConsoleApplication32.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
consumo = 3
el costo es s/.50
*/
int main()
{
	// variables
	int consumo;
	float costo;

	// datos de entrada
	cout << "Ingrese la cantidad de GB que consume : " << endl;
	cin >> consumo;


	//logica
	if (0 <= consumo)
	{
		if (consumo <= 4)
		{
			costo = 50;
		}
		else
		{
			if ((4 < consumo) && (consumo <= 8))
			{
				costo = 85;
			}
			else
			{
				costo = 85 + ((consumo - 8) * 4.5);
			}
		}
	}
	else
	{
		cout << "el valor introducido es invalido" << endl;
	}

	// datos de salida
	cout << "el costo del servicio es de s/. " << costo << endl;

	system("pause");
    return 0; 
}


// ConsoleApplication38.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Si se ingresa un número de 4 cifras debe mostrar un mensaje de error: “Número incorrecto”
Si se ingresa un número de 1 cifra debe mostrar el siguiente mensaje: “El número tiene 1
dígito”
Si se ingresa un número de 2 cifras debe mostrar el siguiente mensaje: “El número tiene 2
dígitos”
Si se ingresa un número de 3 cifras debe mostrar el siguiente mensaje: “El número tiene 3
dígitos”
*/
int main()
{
	// variables
	int numero;

	// datos de entrada
	cout << "Ingrese numero entero positivo en el intervalo cerrado de 1 a 100 : " << endl;
	cin >> numero;

	//logica
	if ((1 <= numero) && (numero <= 100))
	{
		if ((1 <= numero) && (numero <= 9))
		{
			cout << numero << " : El numero tiene 1 digito" << endl;
		}
		else
		{
			if (((10 <= numero) && (numero <= 99)))
			{
				cout << numero << " : El numero tiene 2 digito" << endl;
			}
			else
			{
				if (numero = 100)
				{
					cout << numero << " : El numero tiene 3 digito" << endl;
				}
			}
		}
	}
	else
	{
		cout << "Error" << endl;
	}


	system("pause");
	return 0;
}

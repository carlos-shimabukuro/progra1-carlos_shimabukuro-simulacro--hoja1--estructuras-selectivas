// ConsoleApplication35.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Si se ingresa un número de 4 cifras debe mostrar un mensaje de error: “Número incorrecto”
Si se ingresa un número de 2 cifras debe mostrar un mensaje de error: “Número incorrecto”
Si se ingresa el número 263 debe mostrar el número al revés: 362

*/
int main()
{
	// variables
	int a, b, c;
	float numero;

	// datos de entrada
	cout << "Ingrese un numero entero de 3 cifras : " << endl;
	cin >> numero;

	//logica
	if ((0.100 < (numero / 1000)) && ((numero / 1000) < 1))
	{
		cout << "Numero correcto" << endl;

		a = numero / 100;
		b = (numero / 10) - (a * 10);
		c = (numero - ((a * 100) + (b * 10)));
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}

	//datos de salida
	cout << "Numero al reves : " << c << b << a << endl;

	system("pause");
	return 0;
}

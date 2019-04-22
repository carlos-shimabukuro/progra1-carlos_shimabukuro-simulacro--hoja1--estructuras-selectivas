// ConsoleApplication36.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
 161, 343, 565.
- Si el número que se ingresa es incorrecto, esto significa no tiene 3 cifras, se debe mostrar
un mensaje: “Número incorrecto”
- Si el número que se ingresa es correcto, se debe mostrar un mensaje: “Es número
capicúa” o “No es número capicúa”
*/
int main()
{
	// variables
	int numero, a, b, c, d;
	float numero1;
	
	// datos de entrada
	cout << "Ingresar numero entero de 3 cifras : " << endl;
	cin >> numero;

	//logica
	a = (numero / 100);
	b = (numero / 10) - (a * 10);
	c = (numero - ((a * 100) + (b * 10)));

	d = ((c * 100) + (b * 10) + a);
	numero1 = numero;

	if ((1 <= (numero1 / 100)) && ((numero1 / 100) < 10))
	{
		if (numero == d)
		{
			cout << "Es numero capicua" << endl;
		}
		else
		{
			cout << "No es numero capicua" << endl;
		}
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}

	system("pause");
	return 0;
}

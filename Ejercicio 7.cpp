// ConsoleApplication26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// Variables
	int a, b;

	// Datos de entrada
	cout << "Ingrese primer numero : " << endl;
	cin >> a;
	cout << "Ingrese segundo numero : " << endl;
	cin >> b;

	// Logica
	if (a % b == 0)
	{
		cout << a << " es multiplo de " << b << endl;
	}
	else
	{
		cout << a << " no es multiplo de " << b << endl;
	}
	E
	system("pause");
	return 0;
}

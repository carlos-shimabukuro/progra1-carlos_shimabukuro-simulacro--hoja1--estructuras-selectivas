// ConsoleApplication20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*
Test
Ingrese un número entero: 364
Es un número par
*/
int main()
{
	//Variable
	int numeroE;

	//Datos de entrada
	cout << "Ingrese un  numero entero : " << endl;
	cin >> numeroE;

	//Logica
	if (numeroE % 2 == 0)
	{
		cout << "El numero es par" << endl;
	}
	else
	{	
		cout << "El numero es impar" << endl;
	}

	system("pause");
	return 0;
}

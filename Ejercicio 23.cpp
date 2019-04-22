// ConsoleApplication47.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
Ingrese el total de horas trabajadas por el obrero: 55
El salario semanal del obrero es de $940.0
*/
int main()
{
	// variables
	int hora, salario;

	// datos de entrada
	cout << " Ingrese las horas trabajadas : " << endl;
	cin >> hora;

	//logica
	if (0 <= hora)
	{
		if (hora <= 40)
		{
			salario = hora * 16;
		}
		else
		{
			if (40 < hora)
			{
				salario = 640 + ((hora - 40) * 20);
			}
		}
		cout << "El salario semanal del obrero es de : $" << salario << endl;
	}
	else
	{
		cout << "Los valores ingresados son incorrectos" << endl;

	}
	//datos de salida

	system("pause");
	return 0;
}

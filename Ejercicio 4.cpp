// ConsoleApplication23.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test
Ingrese la edad de la persona: 18 años
El precio de la entrada es de 15 soles
*/

int main()
{
	//Variables
	int edadP;

	//Datos de entrada
	cout << "Ingrese la edad de la persona : " << endl;
	cin >> edadP;

	//Logica
	if ((0 < edadP) && (edadP < 100))
	{
		if (edadP < 18)
		{
			cout << "El precio de la entrada es de 7" << endl;
		}
		else
		{
			if ((18  <= edadP) && (edadP <= 50))
			{
				cout << "El precio de la entrada es de 15" << endl;
			}
			else
			{
				if (50 < edadP)
				{
					cout << "El precio de la entrada es de 5" << endl;
				}
			}
		}
	}
	else
	{
		cout << "Edad no valida" << endl;
	}



	system("pause");
    return 0; 
}


// ConsoleApplication43.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
test
*/
int main()
{
	// variables
	float nota;
	// datos de entrada
	cout << "Ingrese nota del alumno : " << endl;
	cin >> nota;

	//logica
	if ((0 <= nota) && (nota <= 20)
	{
		if ((0 <= nota) && (nota < 5)
		{
			cout << "Nesecita estudiar" << endl;
		}
		else
		{
			if ((5 <= nota) && (nota < 13)
			{
				cout << "Jalado" << endl;
			}
			else
			{
				if ((13 <= nota) && (nota < 15)
				{
					cout << "Raspando" << endl;
				}
				else
				{
					if ((15 <= nota) && (nota < 20)
					{
						cout << "Raspando" << endl;
					}
					else
					{
						cout << "Matricula de honor" << endl;
					}
				}
			}
		}
	}
	else
	{
		cout << " El dato introducido es incorrecto" << endl;
	}

	system("pause");
	return 0;
}

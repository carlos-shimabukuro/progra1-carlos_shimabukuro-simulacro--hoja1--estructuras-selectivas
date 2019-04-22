// ConsoleApplication33.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
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
	int faltas;

	// datos de entrada
	cout << "Ingrese su promedio ponderado : " << endl;
	cin >> nota;
	cout << "Ingrese la cantidad de faltas que ha tenido en el ciclo : " << endl;
	cin >> faltas; 

	//logica
	if ((0 <= nota) && (0 <= faltas))
	{
		if ((15 <= nota) && (faltas == 0))
		{
			cout << "Se aprueba la beca del 30%" << endl;
		}
		else
		{
			cout << "No se aprueba la beca del 30%" << endl;
		}
	}
	else
	{
		cout << "Los datos introducidos son invalidos" << endl;
	}
	//datos de salida

	system("pause");
	return 0;
}

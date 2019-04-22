// ConsoleApplication27.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test 
Ingrese el sexo de la persona (F o M): F
Ingrese la edad de la persona: 24
El número debe ser de 20 pulsaciones por cada 10 segundos aproximadamente.*/

int main()
{
	// Variables
	float pulsaciones, edad;
	char sexo;

	// Datos de entrada
	cout << " Ingrese el sexo de la persona (M : masculino ; F: femenino) : " << endl;
	cin >> sexo;
	cout << "Ingrese la dedad de la persona : " << endl;
	cin >> edad; 

	// Logica
	if (sexo == 'F')
	{
		pulsaciones = ((220 - edad) / 10);
	}
	else
	{
		if (sexo == 'M')
		{
			pulsaciones = ((210 -  edad) / 10);
		}
	}

	// Datos de salida
	cout << "El numero debe ser de " << pulsaciones << "por cada 10 segundos aproximadamente" << endl;
	system("pause");
    return 0; 
}


// ConsoleApplication21.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test 
Ingrese el peso del dinosaurio: 120.50
Ingrese el peso del elefante: 255.50
El elefante pesa más que el dinosauri
*/
int main()
{
	//Variables
	float pesoEl, pesoDi;

	//Datos de entrada
	cout << "Ingrese el peso del dinosaurio : " << endl;
	cin >> pesoDi;	
	cout << "Ingrese el peso del elefante : " << endl;
	cin >> pesoEl;

	//Logica
	if (pesoDi < pesoEl)
	{
		cout << " El elefante pesa mas que el dinosaurio" << endl;
	}
	else
	{
		if (pesoDi > pesoEl)
		{
			cout << "El dinosaurio pesa mas que el elefante" << endl;
		}
		else
		{
			cout << "Ambos pesan igual" << endl;
		}
	}
	system("pause");
   return 0; 
}


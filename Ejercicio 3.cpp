// ConsoleApplication22.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 
test1
Nota del alumno : 15
El alumno esta : Aprobado

test2
Nota del alumno : 9
El alumno esta : Desaprobado*/

int main()
{
	//Variables
	float notaA;

	//Datos de entrado
	cout << "Nota del alumno : " << endl;
	cin >> notaA;

	//Logica
	if ((0 <= notaA) && (notaA <= 20))
	{
		if (notaA < 12.50)
		{
			cout << "El alumno esta : Desaprobado" << endl;
		}
		else
		{
			cout << "El alumno esta : Aprobado" << endl;
		}
	}
	else
	{
		cout << "Nota no valida" << endl;
	}
    return 0; 
}


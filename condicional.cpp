/*
 * Programacion C++
 * 
 * Condicional If - Else
 * Es una estructura de control que permite tomar una decisión,
 * dependiendo si la condición que se evalua se cumple.
 * 
 * EduF1g
 */


#include <iostream>

using namespace std;

int main()
{

	int valor = 0;

	cout<<"ingrese un numero: "<<endl;
	cin>>valor;

	if(valor >100)
	{
	 cout<<"El valor insertado es mayor que 100"<<endl;
	}
	else
	{
	 cout<<"El valor es menor que 100"<<endl;
	}

	return 0;
} 

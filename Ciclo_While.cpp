/*
 * Programacion C++
 * 
 * Ciclo While:
 * Es utilizado para ejecutar un bloque de codigo hasta que se cumpla
 * una condición predeterminada
 * 
 * EduF1g
 * 
 */



#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	while (num <=10)      // hacer mientras...
	{
		cout<<num<<endl;  // primero se realiza orden

		num++ ;           //Equivalente a num=num+1, num+=1 
		
						  //Realizada la orden se evalua la condición
						  //Si se cumple se termina el ciclo si no se
						  //continua ejecutando hasta que se cumpla
	}
	return 0;
}

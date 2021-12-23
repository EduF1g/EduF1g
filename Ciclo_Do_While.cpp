/*
 * Programacion C++
 * 
 * Ciclo Do While:
 * Ejecuta un bloque de código mientras se cumple una condición.
 * Primero se ejecuta el cuerpo del ciclo y luego se evalua la 
 * condición para saber si se repite el ciclo una vez más.
 * 
 * EduF1g
 * 
 */


#include <iostream>

using namespace std;

int main()
{

	int i=10;
	cout<<"Looping DO-WHILE " <<endl;

	do                      //se ejecuta las ordenes al menos una vez...
	{
		i++;
		cout<<"Valor de I es: "<<i<<endl;
	}
	while(i>=10 && i<=20); // hasta que la condicion se cumpla

return 0;
}

/*
 * Programacion C++
 * 
 * Valores Booleanos:
 * Los valores booleanos solo son de dos tipos 1 o 0 (True o False)
 * El tipo bool es adecuado para realizar operaciones lógicas
 * 
 * EduF1g
 */



#include <iostream>

using namespace std;

int main()
{
	bool a=true;
	bool b= (1==1);
	//Cuando  es True muestra 1, cuando es false muestra 0
	cout<<"El valor booleano de a es 1?: "<<a<<endl;
	cout<<"El valor booleano de b es 1?: "<<b<<endl;

	bool c=0; // con bool 0 indica c es falso
	bool d=1; // con bool 1 indica que d es true

	//verificamos que c es falso y d es verdadero
	cout<<"El valor booleano de c es 0?: "<<(c==0)<<endl;
	cout<<"El valor booleano de d es 1?: "<<(d==1)<<endl;
	
	//Verificamos que  c no es verdadero y 1 no es falso
	cout<<"El valor booleano de c es 1?: "<<(c==1)<<endl;
	cout<<"El valor booleano de d es d?: "<<(d==0)<<endl;

	return 0;
}

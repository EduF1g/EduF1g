/* 
 * Programacion c++
 * 
 * Uso de una funcion sin parametros, que suma dos 
 * numeros enteros
 * 
 * EduF1g
 */



#include <iostream>
using namespace std;

int suma()
{
	int a=5;
	int b=6;
	return a+b;
}


int main()
{
	int resultado;
	resultado= suma();
	cout<<resultado<<endl;
	return 0;
}

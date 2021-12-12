/*
 * Programacion C++
 * 
 * Tipo de dato float, para manejar numeros decimales de punto flotante
 * 
 * Operador Resta -
 * Operador Suma +
 * Operador Division /
 * Agrupacion de operaciones ( )
 * 
 * EduF1g

 */


#include <iostream>



using namespace std;

float a,b,c;


int main()
{
	cout<<"Ingrese el valor de a: " <<endl;
	   cin>>a;
	cout<<"Ingrese el valor de b: " <<endl;
       cin>>b;
    c=a+b/(a-b);
 
	cout <<"El resultado es: "<<c << endl;
	return 0;
	
}
	

/*
 * Programacion C++
 * 
 * Uso de cin para leer datos de usuario
 * 
 * cin es el flujo de entrada estandar que normalmente es el teclado
 * 
 * EduF1g
 **/


#include <iostream>

int a,b,suma;

int main()
{
	 using namespace std;
	 cout<<"\n ingrese numero a:";
	 cin>>a;
	 cout<<"\n ingrese numero b:";
	 cin>>b;
	 suma=a+b;
	 cout<<"\n la suma de "<<a<<"+"<<b<<" es:"<<suma;
	 return 0;
}

/*
 * Programacion C++
 * 
 * Declaracion de variables y asignacion de valor  haciendo 
 * uso de parentesis
 * 
 * Calculo directo desde el return
 * 
 * EduF1g
 */




#include <iostream>
using namespace std;

int a(0), b(0);

int suma(int a, int b)
{
	return a+b;
}

int main()
{
	cout<<" Inserte un valor: "<<endl;
	cin>>a;
	cout<<"Inserte otro valor: "<<endl;
	cin>>b;
	cout<<"La suma es: "<<suma(a,b)<<endl;
	return 0;
}

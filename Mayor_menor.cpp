/*
 * Programacion C++
 * 
 * Pedir ingresar dos numeros al usuario y determinar cual de los dos
 * es el mayor.
 * 
 * EduF1g
 */

#include <iostream>
using namespace std;

float a,b;

int main()
{
	cout<<"Ingrese un numero decimal: "<<endl;
	cin>>a;
	cout<<"Ingrese otro numero decimal:"<<endl;
	cin>>b;

	if (a>b)
		cout<<a <<" Es mayor que "<<b;
	else
		cout<<b <<" Es mayor que " <<a;
	return 0;
}

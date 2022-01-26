
/*
 * Programacion C++ 
 * 
 * Comparacion de dos numeros, haciendo uso de una funcion inline
 * Si los numeros son iguales se retorna 0
 * Si el primero numero es mayor que el segudo numero se retorna 1
 * si el primer numero es menor que el segudno numero se retorna -1
 * 
 * EduF1g
 */





#include <iostream>
using namespace std;

inline int comparar(int num1,int num2)
{
	
	if(num1==num2)
		return 0;
	if(num1>num2)
		return  1;
		
	return -1;
}

int main()
{
	int nu1,nu2;
	cout<<"Ingrese un mumero entero: "<<endl;
	cin>>nu1;
	cout<<"Ingrese otro numero entero: "<<endl;
	cin>>nu2;
	cout<<"Comparacion: "<<comparar(nu1,nu2)<<endl;
	return 0;
}


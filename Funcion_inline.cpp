
/*
 * Programacion C++
 * 
 * Funcion inline
 * Se conocen como funciones inline a las funciones que, al compilar, 
 * no son llamadas en el código objeto, sino insertadas en la sección 
 * del código donde se las llame.
 * 
 * EduF1g
 */ 



#include <iostream>

using namespace std;

inline long doublenum( int innum)
{
 return innum*2;
}
 
 int main()
 {
	int numero;
	cout<<"Teclee un numero entero: "<<endl;
	cin>>numero;
	cout<<"El doble es: "<<doublenum(numero)<<endl;
 
	return 0;
 }

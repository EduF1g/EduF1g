/*
 *  Programacion C++
 * 
 * El operador ternario ?: es una forma para hacer operaciones condicionales con 3 parámetros. 
 * Su sintaxis básica es:
 * expresión1 ? expresión2 : expresión3
 * Se evalúa la expresión1, y si su resultado es verdadero, devuelve como resultado la expresión2.
 * Si expresión1 es falso, devuelve expresión3
 * 
 * EduF1g
 */

#include <iostream>

using namespace std;
int num;
 

int main ()
{
	cout<<"ingrese un numero: "<<endl;
	cin>>num;

	string frase =(num<0)?"negativo":"positivo";

	cout<<"el numero es: "<<frase<<endl;

return 0;
}



/* 
 * Programacion C++
 * 
 * Uso del Modulo %
 * es un operador binario y tiene sentido solo para números enteros. 
 * Se utiliza de la siguiente manera; sean A y B dos números enteros, 
 * si realizamos la operación A%B el resultado que obtenemos será el 
 * resto de la división entre A y B
 * 
 * EduF1g
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int numero1;
	int numero2;
	int modulo;
	int div;
	
	cout<< "Inserte valor primer numero: "  <<endl;
	cin>>numero1;
	
	cout<<" Inserte el valor segundo numero:  " <<endl;
	cin>>numero2;
	
	
	div = numero1/numero2;
	modulo=numero1 % numero2;
	
	cout<< setw(15)<<" La division es:"<<div <<endl;
	cout<<setw(15)<<"Con resto: "<<modulo<<endl;
	
	if (modulo==0)
		cout<<setw(15)<<"Numero Par"<<endl;
	else
		cout<<setw(15)<<"Numero Impar"<<endl;
	
	return 0;
}

	
	
	

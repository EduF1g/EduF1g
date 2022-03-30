/*
 * Programacion C++
 * 
 * Comportamiento de un puntero en un arreglo
 * 
 * Un puntero al apuntar a un arreglo, apunta a la primera direccion 
 * del arreglo, obteniendo el primer valor, como array[0]
 * 
 * Los valores de un array se almacenan en direcciones consecutivas,
 * por lo que si le sumamos al puntero n direcciones, el puntero apunta
 * n direcciones mas adelante a su direccion actual.
 * 
 * EduF1g
 * 
 */ 



#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char strg[40], one, two, *there;
	int list[100],index, *pt;

	strcpy(strg,"Esta es una cadena de caracteres");
	one=strg[0];
	two= *strg;

	cout<<"El primer resultado es: "<<one<<" "<<two<<endl;

	one =  strg[8];
	two=*(strg+8);
	cout<<"El segundo resultado es: "<<one<<" " <<two<<endl;

	there=strg+10;

	cout<<"El tercer resultado es: "<<strg[10]<<endl;
	cout<<"El cuarto resultado es: "<<*there<<endl;

	for(index=0;index<100;index++)
	{
		list[index]=index + 100;
		pt=list+27;
	}
	cout<<"El quinto resultado es: "<<list[27]<<endl;
	cout<<"El  sexto resultado es: "<<*pt<<endl;

	return 0;
}

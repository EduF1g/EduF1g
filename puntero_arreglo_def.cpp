
/*Programacion C++
 * 
 * Puntero de tipo entero que apunta hacia un arreglo que almacena
 * valores enteros.
 * 
 * Un puntero almacena la direccion de la variable a la que apunta.
 * Una referencia obtiene la direccion de la variable que referencía
 * 
 * Por lo tanto podemos guardar la referencia del arreglo(direccion
 * donde esta guardado) en un puntero. 
 * 
 * Para obtener el valor que contiene la direccion a la que apunta el
 * puntero usamos el *
 * 
 * El puntero apunta a la primera direccion del arreglo, por lo que para 
 * recorrer el arreglo tenemos que avanzar con el puntero un espacio 
 *  de memoria para que apunte a la siguiente direccion del arreglo
 * (Un arreglo almacena sus valores en direcciones consecutivas)
 * 
 * EduF1g
 * 
 */ 




#include <iostream>

using namespace std;

int numeros[5]={10,11,12,13,14};

int main()
{

	int *puntero;
	puntero = &numeros[0];
	for(int i=0;i<5;i++)
	{
		cout<<*puntero<<endl;
		puntero++;
	}

	return 0;
}


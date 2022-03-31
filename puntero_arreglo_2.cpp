/*
 * Programación C++
 * 
 * Ejemplo de como recorrer un arreglo y obtener sus valores usando 
 * un puntero
 * 
 * EduF1g
 * 
 */


#include <iostream>

using namespace std;

int numeros[5]={10,11,12,13,14};

int main()
{

	int *puntero=numeros;
	for(int i=0;i<5;i++)
	{
		cout<<*puntero<<endl;
		puntero++;
	}

		return 0;
}

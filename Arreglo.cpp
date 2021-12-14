/*
 * Programacion C++ 
 * 
 * Arreglos:
 * Un arreglo en C++ es un conjunto de datos que se almacenan
 * en memoria de manera contigua con el mismo nombre. Para diferenciar 
 * los elementos de un arreglo se utilizan índices detrás del nombre del 
 * arreglo y encerrados por [].
 * 
 * EduF1g
 * 
 */

#include <iostream>

using namespace std;

int arreglo[5]; //Arreglo que va  a tener 5 espacios para almacenar 5 numeros enteros

int main()
{
	 arreglo[0]= 10; // Los arreglos se inician contando desde 0
	 arreglo[1]= 15;
	 arreglo[2]= 20;
	 arreglo[3]= 25;
	 arreglo[4]= 30;
	 
	 
	 cout<<"valor arreglo 0: "<<arreglo[0]<<endl;
	 cout<<"valor arreglo 1: "<<arreglo[1]<<endl;
	 cout<<"valor arreglo 2: "<<arreglo[2]<<endl;
	 cout<<"valor arreglo 3: "<<arreglo[3]<<endl;
	 cout<<"valor arreglo 4: "<<arreglo[4]<<endl;
	 cout<<"Sumatoria valores del arreglo: "<< arreglo[0] + arreglo[1] + arreglo[2] + arreglo[3] + arreglo[4] + arreglo[5]<<endl;
	 return 0;
 }

/*
 *Programacion C++ 
 * 
 * Memoria Dinamica
 * La memoria dinámica es un espacio de almacenamiento que se puede solicitar 
 * en tiempo de ejecución. Además de solicitar espacios de almacenamiento, 
 * también podemos liberarlos (en tiempo de ejecución) cuando dejemos de 
 * necesitarlos.
 * 
 * Para realizar esta administración de la memoria dinámica, C++ cuenta 
 * con dos operadores new y delete.
 * 
 * EduF1g
 */





#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nombre[50];
	cout<<"Introduzca su nombre: "<<endl;
	cin>>nombre;

	char *copianombre = new char [strlen(nombre)+1]; // se le suma 1 porque no cuenta fin de cadena
	strcpy(copianombre,nombre);
	cout<<" Si imprimimo *copianombre se imprime  el valor  de la primera direccion"<<endl;
	cout<<*copianombre<<endl;
	cout<<"Si indico el espacio de memoria a imprimir entre corchetes [1][2]"<<endl;
	cout<<copianombre[1];
	cout<<copianombre[2]<<endl;
	cout<<"Para imprimir toda la cadena se nombra todo el puntero sin *"<<endl; 
	cout<<copianombre;
	delete[] copianombre;
}

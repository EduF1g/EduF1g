/*
 * Programacion C++
 * 
 * Declaracion y asignacion de valores de arreglos.
 * Recorrido de arreglos con ciclo for.
 * Uso de la funcion fixed
 * 
 * EduF1g
 * 
 * */


#include <iostream>

using namespace std;

double arreglo[10]={9,6,0,5,1}; // Se puede insertar el valor inicial directamente entre llaves 

int main()
{


	for(int i=0;i<=9;i++)
		cout<<"Arreglo["<<i<<"]="<<arreglo[i]<<endl;

	for(int  i=0;i<=9;i++) //i es diferente del i del ciclo for anterior por eso de declara otra ves porque solo pertece a este ciclo for,
	{                      //si no se declara de nuevo marca error
		cout<<"Ingrese Nuevo valor en el Arreglo["<<i<<"]="<<endl;
		cin>>arreglo[i];
	}
	
	for(int h=0;h<=9;h++)
		cout<<"Arreglo["<<h<<"]="<<arreglo[h]<<endl;

	double total=0;

	for(int n=0;n<=9;n++)
	{
		total=total +arreglo[n];
	}
	
	cout<<endl<<endl<<endl<<endl;
	cout<<"Promedio="<<(total/10)<<endl;
	cout<<fixed; //Funcion de iostream "std::fixed" que agrega  ceros por default con una precicion de 5 ceros despues punto decimal
	cout<<"Promedio="<<(total/10)<<endl;
	
	return 0;
}

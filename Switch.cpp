/*
 * Programacion C++
 * 
 * Switch ejecuta un bloque de sentencias si una variable o expresión entera 
 * coincide con alguno de los valores proporcionados en una lista de constantes
 * enteras (literales int o char, por ejemplo).
 * 
 * 
 */ 



#include <iostream>

using namespace std;

int main()
{

	int opc=0;

	cout<<"Ingrese una opcion: ";
	cin>>opc;

	switch(opc)
	{
	case 1:
			   cout<<"Lunes";
			   break;
	case 2:
			   cout<<"Martes";
			   break;
	case 3:
			   cout<<"Miercoles";
			   break;

	case 4:
			  
			   cout<<"Jueves";
			   break;

	case 5:
			   cout<<"Viernes";
			   break;

	case 6:
			   cout<<"Sabado";
			   break;

	case 7:
			   cout<<"Domingo";
			   break;

	default:
			cout<<"Opcion no valida"<<endl;

	}

	return 0;

}


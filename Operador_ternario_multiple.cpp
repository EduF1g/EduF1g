/*
 * Programacion C++
 * 
 * Ejemplo de como usar el operador ternario de manera multiple
 * De varias opciones seleccionar solo una.
 * 
 * EduF1g
 */

#include<iostream>

using namespace std;

int opc;

int main()
{
	
	cout<<"Elija una opcion del 1 al 5: "<<endl;
	cin>>opc;

	string text=(opc==1)? "Ectronica":
				(opc==2)? "Pop":
				(opc==3)? "Clasica":
				(opc==4)? "Rock":
				(opc==5)? "Rap": 
				"opcion Invalida";
            
	cout<<text<<endl;
 
	return 0;
 }

/*
 * Programacion C++ 
 * 
 * Ejercicio que calcula el porcentaje de aumento de un salario
 * Si el salario es menor de 2000 se aumenta un 15%
 * Si el salario es menor que a 5000 y mayor a 2000 se aumenta 10%
 * Si el salario es mayor a 5000 se aumenta 5%
 * 
 * Ejemplo practico para hacer uso del condicional if y operadores
 * logicos y relacionales
 * 
 * EduF1g
 */



#include <cstdlib>
#include <iostream>

using namespace std;

float sueldo, total, aumento;


int main()
{
	
	
	cout<<"AUMENTO DE SUELDOS"<<endl;
	cout<<"15% AUMENTO SALARIO MENOR A 2000"<<endl;
	cout<<"10% AUMENTO SALARIO MENOR A 5000"<<endl;
	cout<<"5% AUMENTO SALARIO MAYOR A 5000"<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"Ingrese el salario: "<<endl;
	cin>>sueldo;
	
	if (sueldo<2000)
	{
		aumento=sueldo*0.15;
	}
	
	   if (sueldo<5000 && sueldo>=2000)
	   {
		   aumento=sueldo*0.10;
	   }
   
	      if (sueldo > 5000)
	        {
			  aumento=sueldo *0.05;
		 
             }
           
	total=aumento +  sueldo;
	
	cout<<"Salario : "<<sueldo<<endl;
	cout<<"Aumento : "<<aumento<<endl;
	cout<<"Salario Neto: "<<total<<endl;	  


	
	return 0;

}

	

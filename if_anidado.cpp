/*
 * Programacion C++
 * 
 * Condicional if anidado:
 * Ejemplo usando if anidado, Calculo del porcentaje de aumento del 
 * sueldo, de acuerdo a la  cantidad ingresada.
 * 
 * EduF1g
 * 
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
	
	else 
	{
	   if (sueldo<5000)
	   {
		   aumento=sueldo*0.10;
	   }
   
	     if(sueldo >=5000)
	      {
			  aumento=sueldo *0.05;
		 
           }
	   }
           
	total=aumento + sueldo;
	
	cout<<"Salario : "<<sueldo<<endl;
	cout<<"Aumento : "<<aumento<<endl;
	cout<<"Salario Neto: "<<total<<endl;	  

	return 0;

}

	
	
	

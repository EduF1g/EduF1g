/*
 * Programacion C++
 * 
 * Diferencia entre el ciclo While y Do-While 
 * 
 * EduF1g
 */



#include <iostream>

using namespace std;

int main()
{

	int i=10;
	cout<<"Looping DO-WHILE " <<endl;

	// Se ejecuta el bloque del ciclo al menos una vez y luego se 
	// evalua la  condición y la ejecución termina hasta que la 
	// condición se cumpla
	do 
	{ 
		i++;
		cout<<"Valor de I es: "<<i<<endl;
	}
	while(i>=10 && i<=20); 

	
	int j=10;
	cout<<"Looping WHILE " <<endl;

    //Primero se evalua la condicón, si es verdara entonces 
    // se ejecuta el bloque del ciclo.	
	while(j>=10 && j<=20) 
	{                     
		j++;
		cout<<"Valor de j es: "<<j<<endl;	
	}

	return 0;
}

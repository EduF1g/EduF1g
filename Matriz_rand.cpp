
/*
 * Programacion C++
 * 
 * Uso de rand() para generar numeros aleatorios
 * en un ejemplo de calculo con matrices
 * 
 * EduF1g
 */
 
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

	double matriz[5][6]={};
	double total=0;

	//CREACION DE LA MATRIZ
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			matriz[i][j]=(double)rand()/RAND_MAX;
		}
	}
 

	//CALCULANDO VALORES  
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			matriz[i][5]+= matriz[i][j];
		}
		total+=matriz[i][5];
	}
 
	//IMPRIMIR MATRIZ
	for (int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			string fin = (j<4)? ",":
                (j<5)? "=" : "\n";
			cout<<matriz[i][j]<<fin;
		}
	}
 
	cout<<" La sumatoria total es: " << total;
 
	return 0;
 }

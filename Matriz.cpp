/*
 * Programacion C++ 
 * 
 * Matriz
 * Un arreglo que almacena otro arreglo es un arreglo multidimensional,
 * llamado comunmente como matriz. 
 * 
 * matriz[N][M]
 * 
 * Los arreglos multidimensionales son una ampliación de las matrices 
 * de dos dimensiones y utilizan subíndices adicionales 
 * para la indexación. 
 * 
 * Por ejemplo un arreglo de 3 dimensiones utiliza 3 subindices para 
 * la indexacion.
 * 
 * tridimensional[X][Y][Z]
 * 
 * EduF1g
 */

#include <iostream>


using namespace std;

double arreglo[3][3]={{} ,{}};

int main()
{
	for(int i=0;i<3;i++)
	  {
		  for(int j=0;j<3;j++)
		  {
			  cout<<"El valor del arreglo["<<i<<","<<j<<"]= "<<arreglo[i][j]<<endl;
			 }
		 }
	
	
	
	for(int i=0;i<3;i++)
	  {
		  for(int j=0;j<3;j++)
		  {
			  cout<<"Inserte el valor del arreglo["<<i<<","<<j<<"] "<<endl;
			  cin>>arreglo[i][j];
			  
			 }
		 }
	
	
	for(int i=0;i<3;i++)
	  {
		  for(int j=0;j<3;j++)
		  {
			  cout<<"El valor del arreglo["<<i<<","<<j<<"]= "<<arreglo[i][j]<<endl;
			 }
		 }

	return 0;
}

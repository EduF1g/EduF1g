
/*
 * Programacion C++
 * 
 * Comparativa de como se recorre un arreglo para obtener 
 * sus valores, usando el propio arreglo y usando un puntero
 * 
 * EduF1g
 * 
 */ 




#include <iostream>

using namespace std;

int miarreglo[]={2,4,6,8,10,12};
int *ptr;

int main()
{
	ptr=&miarreglo[0];
	for(int i=0;i<6;i++)
	{
		cout<<"Usando arreglo: miarreglo["<<i<<"]= "<<miarreglo[i]<<endl;
		cout<<"usando puntero: "<<ptr + i<<"= "<<*(ptr+i)<<endl;
	}
	cout<<endl<<endl;

	ptr=miarreglo;// apunta a la primera direccion de memoria del arreglo
	for(int i=0;i<6;i++)
	{
	cout<<"ptr arreglo: "<<*(ptr+i)<<endl;
	}
	return 0;
}

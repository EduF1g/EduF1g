/*
 * Programacion C++
 * 
 * Uso de While para obtener los números impares de un valor ingresado
 * 
 * EduF1g
 */



#include <iostream>

using namespace std;

int x,num;

int main()
{
	cout<<"Ingrese un numero cualquiera ";
	cin>>num;
	cout<<"NUMEROS IMPARES"<<endl;

	x=0;

	while(x<=num)
	{
		if(x%2!=0)
		{
			cout<<x<<endl;
		}
	x++;
	}

	return 0;
}


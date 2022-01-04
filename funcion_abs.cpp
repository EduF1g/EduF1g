/*
 * Programacion C++
 * 
 * Uso de la funcion abs() de cstdlib
 * 
 * EduF1g
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int result;

	result=abs(-10);
	cout<<result<<endl;

	cout<<"Inserte un numero negativo cualquiera: "<<endl;
	cin>>result;
	result=abs(result);
	cout<<"Valor absoluto: "<<result<<endl;
	return 0;
}

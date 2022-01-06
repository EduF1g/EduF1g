/*
 * Programacion C++
 * 
 * For anidado
 * Ejemplo de uso de un for anidado en la multiplicacion de
 * los valores de dos matrices
 * 
 * EduF1g
 */ 

#include <iostream>
using namespace std;

int main()
{
	const int array1_len=3;
	const int array2_len=2;

	int myints1[array1_len]={35,-3,0};
	int myints2[array2_len]={20,-1};

	cout<<"Multiplicando myints1 por Myints2: "<<endl;

	for (int index1=0;index1<array1_len;++index1)
	  for (int index2=0;index2<array2_len;++index2)
	  cout<<myints2[index2]<<" x "<<myints1[index1] <<" = "<<myints2[index2]*myints1[index1]<<endl;

	return 0;
 }

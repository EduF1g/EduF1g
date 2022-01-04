/*
 * Programacion C++
 * 
 * ejemplo de uso del sizeof para saber el tamaño en memoria que ocupa
 * los tipos de datos.
 * 
 * EduF1g
 */ 

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int a=0;
	short int b=0;
	long int c=0;
	signed int d=0;
	unsigned int e=0;
	short signed int f=0;
	long signed int g=0;
	short unsigned int h=0;
	long unsigned int i=0;
	
	cout<<" un INT ocupa " <<sizeof(a) <<endl;
	cout<<" un SHORT INT ocupa " <<sizeof(b) <<endl;
	cout<<" un LONG INT ocupa " <<sizeof(c) <<endl;
	cout<<" un SIGNED INT ocupa " <<sizeof(d) <<endl;
	cout<<" un UNSIGNED INT ocupa " <<sizeof(e) <<endl;
	cout<<" un SHORT SIGNED INT ocupa " <<sizeof(f) <<endl;
    cout<<" un LONG SIGNED INT ocupa " <<sizeof(g) <<endl;
    cout<<" un SHORT UNSIGNED INT ocupa " <<sizeof(h) <<endl;
    cout<<" un LONG UNSIGNED INT ocupa " <<sizeof(i) <<endl;
    
    
    cout<< " Los valores de arriba indican que int ocupa 4 bytes, ";
    cout<< " el short ocupa 2 bytes y el long ocupa 8 bytes de memoria";
    
    return 0;
}
    
    

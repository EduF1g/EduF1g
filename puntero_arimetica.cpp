
/* 
 * Programación C++
 * 
 * _Arimetica de un puntero
 * 
 *  Comportamiento de un puntero en la asignacion de valores y
 * 	variables y como estos cambian al ser reasignados.
 * 	
 * 	EduF1g
 * 
 */ 



#include <iostream>

using namespace std;

int main(void)
{
	int a,b,c;
	int *p1,*p2;
	int **p;

	p1=&a; 
	*p1=1;
	
	p2=&b;
	*p2=2;

	p1=p2;
	*p1=0;

	p2=&c;
	*p2=3;
	
	cout<<a<<b<<c<<endl;

	p=&p1;
	*p=p2;
	*p1=1;
	cout<<a<<b<<c<<endl;
}

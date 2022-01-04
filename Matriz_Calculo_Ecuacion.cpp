
/*
 * Programacion C++
 * 
 * Calculo de la ecuacion f(x,y)=(3*(x+1)+(y*y)) para los valores 
 * cuando (0<x<9) y (0<y<9).
 * 
 * Se hace uso de una matriz para resolverlo.
 * 
 * EduF1g
 * 
 */

#include <iostream>

using namespace std;

int main()
{
	int matriz[10][10]={};

	for (int x=0;x<10;x++)
	{
		for(int y=0 ;y<10;y++)
		{
		matriz[x][y]=(3*(x+1)+(y*y));
    
		string renglon=(y<9)? ",":"\n";
		cout<<matriz[x][y]<<renglon;
		}
	}
 return 0;
 }  

/* Programacion C++
 * 
 * Funcionamiento de un puntero en un arreglo char
 * 
 * Puntero de tipo char, que apunta a un arreglo de caracteres,
 * Donde para obtener cada valor que conforma el arreglo hay que recorrerlo
 * por completo con el puntero.
 * 
 * En este ejemplo cada direccion del arreglo es convertido a un caracter
 * char.
 * 
 * EduF1g
 */ 




#include <iostream>

using namespace std;

char letra[15];
char *pt;
int i;
char letter; 

int main()
{
	letra[0]= 'a';
	pt=letra;
	for(i=0;i<15;i++){
		cout<<(char)((*pt) + i)<<endl;  //convierto valor de la direccion en caracter char 
                            			//  estoy leyendo letra a letra de los 15 espacion en
										// forma horizontal									
		}

             
	cout<<endl<<endl<<"Solo char"<<endl;
	for(int j=0;j<15;j++)
	{
		letter='a'+j;// el valor inicial lo voy cambiando por otro al sumarle j
	
		cout<<letter<<endl;
		}


	return 0;
}

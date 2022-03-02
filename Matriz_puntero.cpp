
/*
 * Programacion C++
 * 
 * Puntero que apunta a un puntero de una matriz
 * Crea una matriz de 3x9 y muestra el valor contenido
 * en matriz[2][3]
 * 
 * EduF1g
 */


#include <iostream>

using namespace std;

int main()
{
int **tabla;
int n=3;
int m=9;
int i;

tabla= new int* [n];

for(i=0;i<n;i++)
{
tabla[i] = new int[m];
}
tabla[2][3]=123;
cout<<tabla[2][3]<<endl;

for(i=0;i<n;i++)
delete[] tabla[i];

delete[] tabla;

return 0;
}

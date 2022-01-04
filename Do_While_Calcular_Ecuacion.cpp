/*
 * Programacion C++
 * 
 * Programa para calcular el resultado de la ecuacion 5x^2 + 3x + 8 
 * en el rango de valores proporcionado por el usuario, haciendo uso
 * del ciclo Do- While
 * 
 * EduF1g
 */

#include<iostream>
#include<cmath>

using namespace std;

int x,res,tmp,tmp2,ini,fin;

int main()
{
	cout<<"FUNCION 5x^2 + 3x + 8"<<endl ;
	cout<<"Inserte El valor incial para evaluar la funcion: ";
	cin>>ini;
    cout<<"Inserte valor final para evaluar la funcion: ";
    cin>>fin;
  
 
  do
  {
	  tmp=5*ini;
	  tmp2= pow(tmp,2);
   
      res=tmp2+(3*ini)+8;
  
      cout<<"X: "<<ini<<"    |  "<<res<<endl;
      ini++;
  }
  while(ini<=fin);
  
  return 0;
}

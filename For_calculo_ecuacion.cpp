/*
 * Programacion C++
 * 
 * Programa para Evaluar la Funcion 5x^2 + 3x + 8
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
    cout<<"Inserte valor final para evaluar la funcion(Debe ser mayor al valor inicial): ";
    cin>>fin;
  
    for(int i=ini;i<=fin;i++)
    {
		tmp=5*i;
		tmp2= pow(tmp,2);
		res=tmp2+(3*i)+8;
  
		cout<<"X: "<<i<<"    |  "<<res<<endl;
   }

  return 0;
}


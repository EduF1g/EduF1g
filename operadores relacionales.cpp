/*
 * Programacion C++
 * 
 * Operadores Relacionales
 * == Igualdad
 * != Diferente
 * < Menor que
 * > Mayor que
 * <= Menor igual que
 * >= Mayor igual que 
 * 
 *EduF1g
 */

 #include <iostream>

using namespace std;

int main()
{
	int x,y;
	bool a,b,c,d,e,f;
	
	
	cout<<"ingrese dos numeros enteros"<<endl;
	cout<<"Ingrese valor para X"<<endl; 
	cin>>x;
	cout<<"ingrese valor para Y" <<endl; 
	cin>>y;
	
	
	//Evaluamos X y Y y los guardamos en una variable
	a=(x==y);
	b=(x != y);
	c=(x>y);
	d=(x<y);
	e=(x>=y);
	f=(x<=y);
	
	cout<<endl;
	cout<<endl;
	cout<<" Falso es 0"<<endl;
	cout<<"Verdadero es 1"<<endl;
	cout<<endl;
	cout<<endl;
	
	
	cout<<"¿ "<<x<<" " <<"es igual a " <<y <<" "<<"?: "<<a<<endl;
	cout<<"¿ "<<x<<" " <<"es diferente a " <<y <<" "<<"?: "<<b<<endl;
	cout<<"¿ "<<x<<" " <<"es mayor que " <<y <<" "<<"?: "<<c<<endl;
	cout<<"¿ "<<x<<" " <<"es menor que " <<y <<" "<<"?: "<<d<<endl;
	cout<<"¿ "<<x<<" " <<"es mayor igual que " <<y <<" "<<"?: "<<e<<endl;
	cout<<"¿ "<<x<<" " <<"es menor igual que " <<y <<" "<<"?: "<<f<<endl;
	
	return 0;
}
	
	
	

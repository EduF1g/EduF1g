/*
 * Programacion C++
 * 
 * Modificando la precisión de valores de punto flotante
 * usando las funciones fixed, scientific, setprecision
 * 
 * EduF1g
 */

#include <iostream>     // std::cout, std::fixed, std::scientific
#include <iomanip>     // std::setprecision


int main()
{
	double a = 3.1415926534;
	double b = 2006.0;
	double c = 1.0e-10;

	//Como no declaro "using namespace std"  se tiene que usar std::cout
	// y '\n' en ves de endl
	std::cout<<"Por defecto\n";
	std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n';

	using namespace std;

	cout<<endl<<endl;
	cout<<"Usando Fixed"<<endl;
	cout<<fixed;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';


	cout<<endl<<endl;
	cout<<"Usando Scientific"<<endl;
	cout<<scientific;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<endl;


	cout<<"Precicion de 3 ceros despues del punto decimal"<<endl;
	cout.precision(3);//Funcion de iostream que pone cuantos ceros 
	                  //despues del punto decimal se van a utilizar
	cout<<fixed;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	cout<<scientific<<endl;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';


	cout<<endl<<"Usando Setprecision de la biblioteca 'iomanip' "<<endl;
	cout<<setprecision(6);//Seis ceros despues punto decimal
	cout<<fixed;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	cout<<scientific<<endl;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	cout<<endl<<"Usando Setprecision de la biblioteca 'iomanip'  con 10 ceros despues punto decimal"<<endl;
	cout<<setprecision(10);//Diez ceros despues punto decimal
	cout<<fixed;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
	cout<<scientific<<endl;
	cout<<a<<'\n'<<b<<'\n'<<c<<'\n';

	return 0;
}

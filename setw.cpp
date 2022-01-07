/*
 * Programacion C++
 * 
 * setw
 *  el comando std::setw no genera ninguna salida. En cambio, establece 
 * el ancho de la siguiente E / S en el argumento integral pasado. 
 * Algunos manipuladores de flujos utilizan argumentos; 
 * estos deben incluir un encabezado <iomanip>
 * 
 * EduF1g
 * 
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	cout<<setw(200)<<"¡Estas botellas no se acaban solas!" <<endl;
	cout<<setw(20)<<"Valor hexedecimal de 62: "<<hex<<12+50<<endl;

	cout<<setw(15)<<"H"<<endl;
	cout<<setw(15)<<"O"<<endl;
	cout<<setw(15)<<"L"<<endl;
	cout<<setw(15)<<"A"<<endl;


	cout<<setw(20)<<"M"<<endl;
	cout<<setw(20)<<"U"<<endl;
	cout<<setw(20)<<"N"<<endl;
	cout<<setw(20)<<"D"<<endl;
	cout<<setw(20)<<"O"<<endl;

	return 0;
}

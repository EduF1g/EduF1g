/*
 *Programacion C++ 
 * 
 * Uso de cin.getline(), cin.get()
 * 
 * cin.getline() obtiene un string ingresado por teclado. Necesita tres
 * parametros:
 * 			1. Nombre de variable que contiene el string
 * 			2. Cantidad de caracteres que deseemos se puedan introducir
 * 			3. El caracter que el usuario va a usar como final de la 
 * 			   cadena, generamente es '\n' (Enter)
 * 
 * EduF1g
 */



#include <iostream>

using namespace std;

int main()
{
	char str[500];
	cout<<"Introduce una frase: ";
	cin.getline(str,500, '\n');// '\n' es salto de linea o enter
	cout<<"Tu frase es: "<<str;
	cin.get();
}

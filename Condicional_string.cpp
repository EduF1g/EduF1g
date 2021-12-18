/*
 * Programacion C++
 * 
 * Uso del condicional para comparar dos cadenas de caracteres.
 * 
 * EduF1g
 */ 
 
#include <iostream>

using namespace std;

int main()
{

	string pwd,pass;

	cout<<"Establesca su contraseña: "<<endl;
	cin>>pwd;


	cout<<"Ingrese su contraseña: "<<endl;
	cin>>pass;


    if(pwd==pass)
    {
		cout<<"CONTRASEÑA CORRECTA"<<endl;
	}
	else
	{
		cout<<"LO SIENTO CONTRASEÑA INCORRECTA"<<endl;
	}
   
	return 0;
} 

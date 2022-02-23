
/*
 *Programacion C++ 
 * 
 * Calculo de parametros de una caida libre, se puede calcular los siguientes
 * valores: 
 * 	Velocidad final ingresando el tiempo de la caida
 * 	Altura de la caida ingresando el tiempo de la caida
 *  Tiempo de caida ingresando la altura de la caida
 * 
 * EduF1G
 */






#include <iostream>
#include <cmath>

using namespace std;

float d,t;
const float g=9.81;

int main()
{
cout<<"CAIDA LIBRE"<<endl<<endl;
cout<<"1. VELOCIDAD FINAL"<<endl;
cout<<"2. ALTURA DE LA CAÍDA"<<endl;
cout<<"3. TIEMPO"<<endl<<endl<<endl;

int opc=0;
cout<<"Seleccione una opción: "<<endl;
cin>>opc;

switch(opc)
{
	case 1:
	       cout<<"Inserte el tiempo de la caida: "<<endl;
	       cin>>t;
	       d=g*t;
	       cout<<"Velocidad Final: "<<d<<" m/s"<<endl;
	       break;
	       
    case 2:
	       cout<<"Inserte el tiempo  de la  caida: "<<endl;
	       cin>>t;
	       d=(g*(pow(t,2)))/2;
	       cout<<"Altura de la caida: "<<d<<" m"<<endl;
	       break;
	       
	case 3:
	       cout<<"Inserte la altura  de la  caida: "<<endl;
	       cin>>d;
	       t=sqrt((2*d)/g);
	       cout<<"Tiempo de la caida: "<<t<<" sg"<<endl;
	       break;      
	       
	       
    default:
           cout<<"Opción no válida"<<endl;
           break;
}
return 0;
}

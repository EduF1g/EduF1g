/*
 * Programación C++
 * 
 * Break y continue: 
 * Break: Permite terminar o salir de un ciclo
 * Continue: Forza a saltar a la siguiente iteración 
 * 
 * EduF1g
 */

#include <iostream>

using namespace std;

int main()
{
	int n=0;
	while (true)
	{
		n++;
		if(n>=10)
		{
			break;
		}
		else
		{
        if(n==4 or n==6)
           continue;
	}
     
     cout<<n<<endl;
 }
 
return 0;
}    
 

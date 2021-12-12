/*
 * Programacion C++
 * 
 * Uso de una funcion con parametros o como llamar
 * una funcion directamente desde el flujo de salida
 * 
 * Eduf1g
 * 
 */



#include <iostream>

int Addition(int a, int b)
{
    return (a + b);
}

int main()
{
    using namespace std;
    cout << "Resultado de la operacion: " << Addition(2, 4) << "\n";
    return 0;
}

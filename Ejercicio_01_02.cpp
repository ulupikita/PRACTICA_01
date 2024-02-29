// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 2
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin
 
#include <iostream>
using namespace std;

int main()
{
    double n,c;
    cout<<"ingrese los grados centigrados que desea convertir"<<endl;
    cin>>n;
    
    c=n+273.15;//por 0 grados centigrados vale 273.15 en kelvin
    
    cout<<"la conversion es: "<<c<<endl;

    return 0;
}
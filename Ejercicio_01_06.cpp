// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 6
// Problema planteado: En el estacionamiento del CineCenter se cobra 17 Bs la primera hora, si pasa de una 
//hora se cobra 15 Bs adicional por hora.
//Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.

 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h,p;

    cout<<"ingrese las horas que estaba estacionado"<<endl;
    cin>>h;
    
    p=(15*h)+2;
    
    cout<<"debe pagar: "<<p<<endl;

    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 14
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double b,h,v;
    
    cout<<"ingrese la base"<<endl;
    cin>>b;
    
    cout<<"ingrese la altura"<<endl;
    cin>>h;
    
    v=(1.0/3.0)*pow(b,2)*h;//formula para calcular el volumen de una piramide de base cuadrada

    cout<<"el volumen de la piramide es: "<<v<<endl;
    
    return 0;
}

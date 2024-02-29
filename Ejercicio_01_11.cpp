// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 11
// Problema planteado: Escriba la sucesión de Fibonacci.

#include <iostream>
using namespace std;

int main() {
    
    int n,d3,d1=0,d2=1;
    
    cout<<"ingrese la cantidad de terminos"<<endl;
    cin>>n;
    
    cout<<d1<<","<<d2<<",";
    
    for(int i=2;i<n;i++)
    {
        d3=d1+d2;
        cout<<d3<<",";
        d1=d2;//asignamos nuevos valores tanto para d1 y d2
        d2=d3;
    }
    
    return 0;
}

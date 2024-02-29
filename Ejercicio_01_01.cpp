// Materia: Programación I, Paralelo 1
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 1
// Problema planteado:1. Promedio de notas, escriba un programa que lea N notas y saque le promedio general. 
#include <iostream>
using namespace std;

int main()
{
    float n,y,s=0,p=0;
    cout<<"introduce cuantas notas quiere registar"<<endl;
    cin>>n;
    
    for(float i=0; i<n; i++)
    {
        cout<<"ingrese la nota"<<endl;
        cin>>y;
        s=s+y; //vamos sumando cada nota que se ingresa
    }
    
    p=s/n;
    
    cout<<"el promedio es: "<<p<<endl;

    return 0;
}
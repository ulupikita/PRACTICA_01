// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 10
// Problema planteado:  Escriba un programa que ingrese varios valores numéricos, hasta el que el usuario 
//ingrese el valor de cero calculo la suma y el promedio de estos.



 
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double n,p,s=0,i=0;
    
    while(true)
    {
        cout<<"Ingrese un numero,y para terimnar 0: ";
        cin>>n;
        
        if(n==0)
        {
            break;//se cierra el bucle si es igual a 0
        }
        
        else
        {
            s+=n;
            i+=1;            
        }
        
    }
    
    p=s/i;
    
    cout<<"suma: "<<s<<endl;
    cout<<"promedio: "<<p<<endl;
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 16
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está 
//dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, 
//obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2)

#include <iostream>
using namespace std;

int main() {

    float n,a,b,x;
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    
    cout<<"ingrese el intervalo inferior"<<endl;
    cin>>a;
    
    cout<<"ingrese el intervalo superior"<<endl;
    cin>>b;
    
    //creamos las condiciones
    if(n>a and n<b)
    {
        x=n*n;
    }
    
        else if(n<a)
        {
            x=1/n;
        }
    else
    {
        x=n/2;
    }
    
    cout<<x;
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 22
// Problema planteado:  Crear un programa que indique si un número es perfecto o no, se dice que un número 
//es perfecto si la suma de sus divisores es igual al número. 
//Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es 
//perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>
using namespace std;

int main() {

    int n,r=0;
    
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    
    for(int i=1 ;i<=n/2 ; i++)
    {
        if(n%i==0)
        {
            r=r+i;//sumamos sus divisores
        }
    }
    
    if(n==r)
    {
        cout<<"el numero "<<n<<" es perfecto"<<endl;    
    }
    
    else
    {
        cout<<"el numero "<<n<<" no es perfecto"<<endl;
    }
    
    return 0;
}

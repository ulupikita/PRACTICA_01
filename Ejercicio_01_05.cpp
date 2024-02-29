// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 5
// Problema planteado: Número amigo


#include <iostream>
using namespace std;

int main() {

    int x,y,r1=0,r2=0;
    
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    
    cout<<"ingrese otro numero"<<endl;
    cin>>y;
    
    for(int i=1 ;i<=x/2 ; i++)
    {
        if(x%i==0)
        {
            r1=r1+i;
        }
    }
    
    for(int i=1 ;i<=y/2 ; i++)
    {
        if(y%i==0)
        {
            r2=r2+i;
        }
    }
    
    if(r1==y and r2==x)//comprobamos si sus divisores son iguales al otro numero
    {
        cout<<"estos numeros son amigos uwu"<<endl;
    }
    
    else
    {
        cout<<"estos numeros no son amigos unu"<<endl;    
    }
    
    return 0;
}
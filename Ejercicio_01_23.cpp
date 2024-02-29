// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 23
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, 
//empleando sumas sucesivas.


#include <iostream>
using namespace std;

int main() {

    int x,y,s=0;
    
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    
    cout<<"ingrese otro numero"<<endl;
    cin>>y;
    
    for(int i=0 ;i<y ; i++)//se termina el buble cuando llega al segundo numero
    {
        s=s+x;
    }
    
    cout<<"la multiplicacion es: "<<s;
    
    return 0;
}

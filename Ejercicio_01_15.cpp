// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 15
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine cual es el menor
#include <iostream>
using namespace std;

int main() {
    
    double x,y,z;
    
    cout<<"ingrese el primer numero"<<endl;
    cin>>x;
    
    cout<<"ingrese el segundo numero"<<endl;
    cin>>y;
    
    cout<<"ingrese el tercer numero"<<endl;
    cin>>z;
    
    //verificamos si los numeros no son iguales
    
    if(x==y)
    {
        cout<<"los numeros no son diferentes"<<endl;
    }
        else if(x==z)
        {
        cout<<"los numeros no son diferentes"<<endl;    
        }
        else if(y==z)
        {
        cout<<"los numeros no son diferentes"<<endl;    
        }
    else //determinamos cual numero es el menor
    {
        if(x>y)
        {
            if(y>z)
            {
                cout<<"el numero menor es: "<<z;
            }
            else
            {
                cout<<"el numero menor es: "<<y;    
            }
        }
        else if(x>z)
        {
            cout<<"el numero menor es: "<<z;    
        }
        else
        {
            cout<<"el numero menor es: "<<x;
        }
    }

    
    return 0;
}

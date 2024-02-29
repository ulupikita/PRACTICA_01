// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 26
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es


#include <iostream>
using namespace std;

int main() {

    int x,y;
    
    cout<<"primer numero"<<endl;
    cin>>x;
    
    cout<<"segundo numero"<<endl;
    cin>>y;
    
    if(x%y==0)
    {
        cout<<"el primer numero es multiplo del segundo "<<endl;
    }
    
        else if(y%x==0)
        {
            cout<<"el segundo numero es multiplo del primero "<<endl;            
        }
    
    else//si llegara a tener residuo no es multiplo
    {
        cout<<"ninguno es multiplo del otro "<<endl;     
    }
    
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 24
// Problema planteado:  En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”, 
//dicha promoción consiste en lo siguiente:
//Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se 
//compran de cinco a 10 y de 200 Bs. si se compran más de 10.
//Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las 
//llantas que compra y la que tiene que pagar por el total de la compra


#include <iostream>
using namespace std;

int main() {

    int x,t;
    
    cout<<"cuantas llantas comprara"<<endl;
    cin>>x;
    
    //aqui definimos cuanto paga por llanta
    if(x<5)
    {
        t=x*300;
        cout<<"por unidad debe pagar: 300"<<endl;
        cout<<"en total debe pagar: "<<t<<endl;
    }
    
        else if(x>=5 and x<=10)
        {
            t=x*250;
            cout<<"por unidad debe pagar: 250"<<endl;
            cout<<"en total debe pagar: "<<t<<endl;        
        }
    
    else
    {
        t=x*200;
        cout<<"por unidad debe pagar: 200"<<endl;
        cout<<"en total debe pagar: "<<t<<endl;     
    }
    
    return 0;
}

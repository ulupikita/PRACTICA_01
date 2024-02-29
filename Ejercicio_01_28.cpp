// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 28
// Problema planteado:  Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos 
//los meses de 30 días. 


#include <iostream>
using namespace std;

int main() {

    int d1,m1,d2,m2,a1,a2,pf,sf,x;
    
    cout<<"ingrese la primera fecha"<<endl;
    cout<<"dia: "; cin>>d1;
    cout<<"mes: "; cin>>m1;
    cout<<"año: "; cin>>a1;
    
    cout<<"ingrese la segunda fecha"<<endl;
    cout<<"dia: "; cin>>d2;
    cout<<"mes: "; cin>>m2;
    cout<<"año: "; cin>>a2;


        pf=a1*360+m1*30+d1;
        sf=a2*360+m2*30+d2;
        x=sf-pf;//restamos para saber los dias restantes  
    
    
    cout<<"dias restantes "<<x;
    
    return 0;
}
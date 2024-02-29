// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 3
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y 
//raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2,d;
    cout<<"ingrese x1"<<endl;
    cin>>x1;
    cout<<"ingrese y1"<<endl;
    cin>>y1;
    cout<<"ingrese x2"<<endl;
    cin>>x2;
    cout<<"ingrese y2"<<endl;
    cin>>y2;
    
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//al meter la libreria cmath nos permite usar sqrt y pow
    
    cout<<"la distancia es: "<<d<<endl;

    return 0;
}
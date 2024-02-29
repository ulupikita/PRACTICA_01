// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 13
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas
//Los datos de tipo de cambio debe sacar de la página
//https://www.bcb.gob.bo/?q=cotizaciones_tc

#include <iostream>
using namespace std;

int main() {
    
    double b,e,d,l;
    
    cout<<"ingrese un valor en bolivianos"<<endl;
    cin>>b;
    
    e=b/7.44035;//conversiones segun su equivalente
    d=b/6.96;
    l=b/8.69918;

    cout<<"en euros: "<<e<<endl;
    cout<<"en dolares: "<<d<<endl;
    cout<<"en libras: "<<l<<endl;
    
    return 0;
}

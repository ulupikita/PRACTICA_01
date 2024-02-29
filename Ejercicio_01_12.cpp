// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 12
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, 
//minutos y segundos.

#include <iostream>
using namespace std;

int main() {
    
    int s,h,m,r;
    
    cout<<"ingrese un valor en segundos"<<endl;
    cin>>s;
    
    h=s/3600;
    r=s%3600;//para sacar los residuos tanto para los minutos como para los segundos
    m=r/60;
    r=r%60;
    
    cout<<"horas: "<<h<<endl;
    cout<<"minutos: "<<m<<endl;
    cout<<"segundos: "<<r<<endl;
    
    return 0;
}

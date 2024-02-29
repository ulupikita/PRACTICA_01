// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 9
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero



 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,d;
    string ns;
    cout<<"Ingrese un numero entero: ";
    cin>>n;
    
    ns=to_string(n);//guardamos en la variable ns (declarado como string para sabes cuantos digitos tiene)
    
    d=ns.length();
    
    cout<<"El numero tiene "<<d<<" digitos."<<endl;

    return 0;
}

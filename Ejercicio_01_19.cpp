// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 19
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int s=0;
    
    cout << "Ingrese un numero entero: ";
    cin >> n;
    
    for (int i = 0; i < 2 and i < n.length(); ++i) 
    {
        s=s+n[i] - '0';//restamos el valor ascii para asi obtener el numero que deseamos
    }

    cout << "La suma de los dos primeros digitos es: " << s << endl;

    return 0;
}

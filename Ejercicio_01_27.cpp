// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 27
// Problema planteado:  Leer un número entero y mostrarlo con las cifras al revés

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n,ni;
    
    cout << "Ingrese un numero entero: ";
    cin >> n;
    
    for (int i=n.length()-1; i>=0; --i)//vamos restando para que el bucle se cierre
    {
        ni=ni+n[i];
    }

    cout << "el numero invertido es: " << ni<< endl;

    return 0;
}

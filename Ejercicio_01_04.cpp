// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 4
// Problema planteado: Número primo

#include <iostream>
using namespace std;

int main() {
    int n, r = 1;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    for (int j = 2; j <= n / 2; j++) {
        if (n % j == 0) //si el residuo entre n y j es cero no es primo
        {
            r = 0;
            break;
        }
    }
    
    if (r == 1 and n > 1) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }
    
    return 0;
}


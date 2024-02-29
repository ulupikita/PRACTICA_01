// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 8
// Problema planteado: Mostrar los primero 100 número primos.


#include <iostream>
using namespace std;

int main() {
    
    int c=0;
    int x=2;

    cout << "Los primeros 100 numeros primos son:" << endl;

    //iniciamos un bucle para que sean los primeros 100 numeros
    while (c<100) {
        int r=1;

        for (int j=2; j<=x/2; j++) 
        {
            if (x%j==0) 
            {
                r=0;
                break;
            }
        }

        if (r==1) 
        {
            cout<<x<<",";
            c++;
        }

        x++;
    }


    return 0;
}
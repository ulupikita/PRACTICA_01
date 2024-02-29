// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 20
// Problema planteado:  Escribir un programa que permita adivinar un número que sea genere internamente al 
//azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a 
//aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo:
//Supongamos que el número “pensado” por la computadora sea el 42.
//Salida del programa:
//Estoy pensando un número entre 0 y 50
//Intento 1
//? 25 
//El numero esta entre 25 y 50
//Intento 2
//? 34
//El numero esta entre 34 y 50
//Intento 3
//? 45
//El numero esta entre 34 y 45
//Intento 4
//? 40
//El numero esta entre 40 y 45
//Intento 5
//? 42
//Felicitaciones… Adivinaste el número

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n;
    
    srand(time(NULL));
    int x=rand()%51;//generamos un numero al azar del 0 al 50
    cout<<x;
    
    cout<<"estoy pensando un numero entro el 0 y 50"<<endl;
    
    for(int i=1 ;i<=5; i++)
    {
        cout<<"intento "<<i<<endl;
        cout<<"? "; 
        cin>>n;
        
        if(n==x)
        {
            cout<<"Felicitaciones Adivinaste el...numero"<<endl;
            i=6;
        }
        
    }

    return 0;
}

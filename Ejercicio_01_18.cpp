// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 18
// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos 
//correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que 
//consiste en lo siguiente:
//- Empiece con cualquier entero positivo.
//- Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
//- Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, 
//cuando el entero inicial es 26, la secuencia será:
//26 13 40 20 10 5 16 8 4 2 1



#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n,x;

    cout<<"ingrese un numero entero mayor a 1: "<< endl;
    cin>>n;
    
    cout<<n<<"  ";
    
    while(n!=1)
    {

        if(n%2==0)
        {
            x=n/2;
        } 
        
        else
        {
            x=(n*3)+1;
        }
        
        cout<<x<<"  ";
        n=x;//le asignamos el nuevo valor a nuestra variable n
    }


    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 7
// Problema planteado:  Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes 
//en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

 
#include <iostream>
using namespace std;

int main()
{
    int m;

    cout<<"ingrese el mes con un numero del 1-12"<<endl;
    cin>>m;
    
    if(m<=12 and m>=1)
    {
      switch (m)
      {
        case 1:
        cout<<"enero"<<endl;
        break;//siempre debe haber un break
        
        case 2:
        cout<<"febrero"<<endl;
        break;
        
        case 3:
        cout<<"marzo"<<endl;
        break;
        
        case 4:
        cout<<"abril"<<endl;
        break;
        
        case 5:
        cout<<"mayo"<<endl;
        break;
        
        case 6:
        cout<<"junio"<<endl;
        break;
        
        case 7:
        cout<<"julio"<<endl;
        break;
        
        case 8:
        cout<<"agosto"<<endl;
        break;
        
        case 9:
        cout<<"septiembre"<<endl;
        break;
        
        case 10:
        cout<<"octubre"<<endl;
        break;
        
        case 11:
        cout<<"noviembre"<<endl;
        break;
        
        case 12:
        cout<<"diciembre"<<endl;
        break;
      }
      
    }
    
    else
    {
        cout<<"mes invalido"<<endl;
    }

    return 0;
}
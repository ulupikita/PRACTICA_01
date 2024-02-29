// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 21
// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera 
//necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los 
//distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para 
//asegurar el pago exacto de los artículos comprados la señora anota el precio y la 
//cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los 
//demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de 
//llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>
using namespace std;

int main() {

    int d,u,p,t=0,tt=0;
    
    cout<<"cuantos articulos diferentes esta comprando"<<endl;
    cin>>d;
    
    for(int i=1 ;i<=d; i++)
    
    {
        cout<<"del articulo "<<i<<" cuantas unidades compro "<<endl;
        cin>>u;
        cout<<"precio de este articulo: "<<endl;
        cin>>p;
        t=u*p;
        tt=tt+t;//sumamos los totales de cada articulo
        
    }
    
    cout<<"el total a pagar es: "<<tt<<endl;

    return 0;
}

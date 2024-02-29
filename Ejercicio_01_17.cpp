// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 17
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que 
//dependerá del número de computadoras que compre. Si las computadoras son menos 
//de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de 
//computadoras es mayor o igual a cinco, pero menos de diez se le otorga un 20% de 
//descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada 
//computadora es un valor que el usuario ingrese desde el teclado. 


#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n,p,d,f,s=0;

    cout<<"cuantas computadoras compro: "<< endl;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"ingrese el precio de las computadoras"<<endl;
        cin>>p;
        s=s+p;//sumamos los precios de cada computadora
    }
    
    if(n<5)
    {
        d=s*0.10;
        f=s-d;
    }
    
        else if(n>=5 and n<10)
        {
            d=s*0.20;
            f=s-d;            
        }
        
        else if(n>=10)
        {
            d=s*0.40;
            f=s-d;
        }
    
    
    cout<<"lo que debe pagar es: "<<f<<endl;


    return 0;
}
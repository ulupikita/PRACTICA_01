// Materia: Programación I, Paralelo 4
// Autor: Abigail Quisbert Lopez
// Fecha creación: 22/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 30
// Problema planteado: Un supermercado decide efectuar una promoción de descuentos por el valor de las 
//compras que efectúan sus clientes, esta promoción se basa en las siguientes 
//condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ningún descuento
//Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el 
//total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>
#include <string>
using namespace std;

int main() {

    float n,v,t1=0,t2=0,t3=0,td1=0,td2=0,tt,d1,d2,a,b,c;
    cout<<"ingrese cuantos clientes leeremos"<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        cout<<"para el cliente "<<i<<endl;
        cout<<"ingrese el total de sus ventas"<<endl;
        cin>>v;
    
        if(v<100)
        {
            t1=t1+v;    
        }
        
            else if(v>=100 and v<500)
            {
                d1=v*0.05;//sacamos el descuento 1
                td1=v-d1;//descuento 1
                t2=t2+v;//venta sin descuento
                a=a+td1;
            }
        else
        {
            d2=v*0.08;
            td2=v-d2; //aqui sacamos los descuentos
            t3=t3+v;
            b=b+td2;
            
        }
        
    }
    
    c=t1+a+b;
    
    tt=t1+t2+t3;
    
    cout<<"el total de ventas efectuadas es: "<<tt<<endl;
    cout<<"el total de ventas con el descuento es: "<<c<<endl;
    
    return 0;
}

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include "Libro.hpp"


int main(){
    Libro L1, L2, L3("Fisica","Los secretos del universo",600); 


    L3.establecerPrecio(300);
    cout<<L3.obtenerTitulo()<<endl;
    cout<<L3.obtenerPrecio()<<endl;
    cout<<"-------------------------"<<endl;
    
    L1.establecerTema("Filosofia");
    L1.establecerTitulo("El camino de los sabios");
    L1.establecerNumPaginas(200);
    L1.establecerPrecio(500);

    cout<<"Libros a la venta"<<endl;
    cout<<L1.obtenerTema()<<endl;
    cout<<"Titulo: "<<L1.obtenerTitulo()<<endl;
    cout<<"Precio: "<<L1.obtenerPrecio()<<endl;

    L2.establecerTema("Matematica");
    cout<<"Tema del objeto 2"<<endl;
    cout<<L2.obtenerTema()<<endl;


    return 0;
}
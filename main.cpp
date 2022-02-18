#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include "Libro.hpp"


int main(){

int opcion;
string titulo, tema;
string autor;
Libro   L1;//L2(tema,titulo,autor);
Libro libros[2];
/*
    libros Arreglo

[   ], [     ],[    ]... [   ]

*/

int contador= 0;


do{
cout<<"Sistema bibleotecario"<<endl;
cout<<"Seleccione una opción: "<<endl;
cout<<"1.  Registrar  Libro"<<endl;
cout<<"2.  Buscar Libro"<<endl;
cout<<"Opcion: ";
cin >> opcion;

switch (opcion)
{
case  1:

for (int  i = 0; i < 2; i++)
 {
    cout<<"Ingrese el titulo del Libro: ";
    cin >> titulo;
    cout<<"Ingrese el tema: ";
    cin >> tema;
    //cout<<"Ingrese al autor: "<<endl;
    //cin >> autor;

    libros[i].establecerTema(tema);
    libros[i].establecerTitulo(titulo);
    cout<<"Libro ingresado con exito"<<endl;
    cout<<"*******************************"<<endl;
 }
    break;

  case 2:
            cout<<"Ingrese el tema del libro a buscar: ";
            cin  >> tema;
            
            if(L1.obtenerTema() == tema){
                cout<<"***************************************"<<endl;
                cout<<"El libro que busca se encuentrra:"<<endl;
                cout<<"Tema: "<<L1.obtenerTema()<<endl;
                cout<<"Titulo: "<<L1.obtenerTitulo()<<endl;
                //cout<<"Autores: "<<L2.onte
            }
            else{
                cout<<"El libro no se encuentra"<<endl;
            }
             break;

default:
    break;
}
cout<<"________________________________________________"<<endl<<endl;
}while(true);

    return 0;
}
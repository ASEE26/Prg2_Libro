#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include "Libro.hpp"

void ingresarLibros(Libro *, int); // Prototipo de la función
void bucarLibro(Libro *, int);


int main(){

int opcion;
int cantidadLibros;
string autor;

// Memoria dinamica.
Libro *libros;
//Libro libros[2];

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

        cout<<"Cuantos Libros desea registrar: ";
        cin >> cantidadLibros;
        libros = new Libro[cantidadLibros]; // Arreglo de libros, pero vacio. Sin libros.
        ingresarLibros(libros,cantidadLibros);
      cout<<"Cantiodad de libros despues de ingresar libros: "<<cantidadLibros<<endl;
    break;

  case 2:
           bucarLibro(libros,cantidadLibros);

             break;

default:
    break;
}
cout<<"________________________________________________"<<endl<<endl;
}while(true);

    return 0;
}


void ingresarLibros(Libro *L, int n){
     string titulo, tema;

  for (int  i = 0; i < n; i++)
        {
            cout<<"Ingrese el titulo del Libro "<<i+1<<"  : ";
            cin >> titulo;
            cout<<"Ingrese el tema: ";
            cin >> tema;
            //cout<<"Ingrese al autor: "<<endl;
            //cin >> autor;

            L[i].establecerTema(tema);
            L[i].establecerTitulo(titulo);
            cout<<"Libro ingresado con exito"<<endl;
            cout<<"*******************************"<<endl;

        }
        n=10000;

}

void bucarLibro(Libro *L, int n){
        string titulo, tema;
        bool estaLibro = false;

        cout<<"Ingrese el tema del libro a buscar: ";
            cin  >> tema;
            estaLibro = false;
            for (int  i = 0; i < n; i++)
            {   
                    if(L[i].obtenerTema() == tema){
                        cout<<"***************************************"<<endl;
                        cout<<"El libro que busca se encuentrra:"<<endl;
                        cout<<"Tema: "<<L[i].obtenerTema()<<endl;
                        cout<<"Titulo: "<<L[i].obtenerTitulo()<<endl;
                        //cout<<"Autores: "<<L2.onte
                        estaLibro = true;
                    }
              }
              if(!estaLibro){
                  cout<<"EL LIBRO NO SE ENCUENTRA REGISTRADO"<<endl;
              }


}
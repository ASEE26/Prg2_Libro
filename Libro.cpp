#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include "Libro.hpp"


Libro::Libro(string miTema, string miTutulo, float precio){
establecerTema(miTema);
establecerTitulo(miTutulo);
establecerPrecio(precio);
}

Libro::Libro(string miTema, string miTitulo, string miAutor){
    tema = miTema;
    titulo = miTitulo;
    autor = miAutor;
}

Libro::Libro(){}

void Libro::establecerTema(string t){
    tema = t;
} 
void Libro::establecerTitulo(string t){
    titulo = t;
} 
void Libro::establecerPrecio(float p){
    precio = p;
} 
void Libro::establecerNumPaginas(int pag){
    numPagina = pag;
} 

string Libro::obtenerTema(){
    return tema;
}

string Libro::obtenerTitulo(){
    return titulo;
}

float Libro::obtenerPrecio(){
    return precio;
}

int  Libro::obtenerNumPaginas(){
    return numPagina;
}
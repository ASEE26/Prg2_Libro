#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;


// Clases:
class Libro{

    public:

    // Funciones clasicas en c++ (programación estructurada) 
    /*
    Funcion tiene como componentes lo siguiente:
    DatoDeRetorno NombreDeLaFuncion(Parametros){
        Instrucciones
        retorno
    }

    int edad(fechaDeNacimiento){
        Calculo
        return edadActual
    }
// Hay funciones que no necesitan retornar ningun valor , por tanto el tipo de retorno es vacio, es decir, void.

    */
   // Las "funciones" creadas en una clase se llaman metodos, o funciones miembros.
        void establecerTema(string t){
            tema = t;
        }

        string obtenerTema(){
            return tema;
        }

    private:
    // variables de la clase:  Atributos de la clase o bien miembros de datos.
        string tema, titulo;
        int numPagina;
        float precio;
        // Editorial, autores, formato, tipo de pasta

};


int main(){
    Libro L1, L2; // crear un objeto del tipo Libro,  es decir, la "variable" L1 es en realidad un objeto de la clase Libro
    // En cierta forma, necesitamos que L1 tenga informacion sobre su tema, titulo, numPagina y precio, en pocas palabras,
    // Necesitamos llenar los miembros de datos del objeto L1

    L1.establecerTema("Filosofia");
    cout<<L1.obtenerTema()<<endl;

    L2.establecerTema("Matematica");
    cout<<"Tema del objeto 2"<<endl;
    cout<<L2.obtenerTema()<<endl;


    return 0;
}
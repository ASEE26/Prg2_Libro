#include <string>
using std::string;

class Libro{

    public:

        // Sobre carga de constructores
        Libro(string , string , float );
        Libro(string, string, string);
        Libro();

        void establecerTema(string );
        void establecerTitulo(string );
        void establecerNumPaginas(int );
        void establecerPrecio(float );

        string obtenerTema();
        string obtenerTitulo();
        int obtenerNumPaginas();
        float obtenerPrecio();
    private:
    // variables de la clase:  Atributos de la clase o bien miembros de datos.
        string tema, titulo, autor;
        int numPagina;
        float precio;
        // Editorial, autores, formato, tipo de pasta

};
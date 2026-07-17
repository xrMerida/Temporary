#include "libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string codigo, int anioPublicacion,
             std::string autor, int numeroPaginas)
    : MaterialBibliografico(titulo, codigo, anioPublicacion) {
  this->autor = autor;
  this->numeroPaginas = numeroPaginas;
}

void Libro::mostrarDetalle() {
  mostrarInformacion();
  std::cout << "Autor: " << autor << "\n";
  std::cout << "Numero de páginas: " << numeroPaginas << std::endl;
}

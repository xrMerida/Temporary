#include "libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string codigo, int anioPublicacion,
             std::string autor, int numeroPaginas)
    : MaterialBibliografico(titulo, codigo, anioPublicacion) {
  this->autor_ = autor;
  this->numeroPaginas_ = numeroPaginas;
}

void Libro::mostrarDetalle() {
  mostrarInformacion();
  std::cout << "Autor: " << autor_ << "\n";
  std::cout << "Numero de páginas: " << numeroPaginas_ << std::endl;
}

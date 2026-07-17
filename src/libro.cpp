#include "libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string codigo, int anioPublicacion,
             std::string autor, int numeroPaginas)
    : MaterialBibliografico(titulo, codigo, anioPublicacion) {
  this->autor_ = autor;
  this->numeroPaginas_ = numeroPaginas;
}

// 7 minutos por página
int Libro::calcularHorasLectura() { return (numeroPaginas_ * 7) / 60; }

void Libro::mostrarDetalle() {
  mostrarInformacion();
  std::cout << "Autor: " << autor_ << "\n";
  std::cout << "Numero de páginas: " << numeroPaginas_ << "\n";
  std::cout << "Tiempo de lectura: " << Libro::calcularHorasLectura() << "h"
            << std::endl;
}

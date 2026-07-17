#include "revista.h"
#include <iostream>

Revista::Revista(std::string titulo, std::string codigo, int anioPublicacion,
                 std::string categoria, int numeroEdicion)
    : MaterialBibliografico(titulo, codigo, anioPublicacion) {
  this->categoria_ = categoria;
  this->numeroEdicion_ = numeroEdicion;
}

void Revista::mostrarDetalle() {
  mostrarInformacion();
  std::cout << "Categoria: " << categoria_ << "\n";
  std::cout << "Numero de edicion: " << numeroEdicion_ << std::endl;
}

void Revista::mostrarCategoria() {}

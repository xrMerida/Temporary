#include "revista.h"
#include <iostream>

Revista::Revista(std::string titulo, std::string codigo, int anioPublicacion,
                 std::string categoria, int numeroEdicion)
    : MaterialBibliografico(titulo, codigo, anioPublicacion) {
  this->categoria = categoria;
  this->numeroEdicion = numeroEdicion;
}

void Revista::mostrarDetalle() {
  mostrarInformacion();
  std::cout << "Categoria: " << categoria << "\n";
  std::cout << "Numero de edicion: " << numeroEdicion << std::endl;
}

void Revista::mostrarCategoria() {}

#include "materialBibliografico.h"
#include <iostream>

MaterialBibliografico::MaterialBibliografico(std::string titulo,
                                             std::string codigo,
                                             int anioPublicacion) {
  this->titulo_ = titulo;
  this->codigo_ = codigo;
  this->anioPublicacion_ = anioPublicacion;
  this->disponible_ = true;
};

void MaterialBibliografico::mostrarInformacion() {
  std::cout << "Titulo: " << titulo_ << "\n";
  std::cout << "Codigo: " << codigo_ << "\n";
  std::cout << "Año de Publicación: " << anioPublicacion_ << "\n";
  if (disponible_) {
    std::cout << "Disponible: si" << std::endl;
  } else {
    std::cout << "Disponible: no" << std::endl;
  }
}

void MaterialBibliografico::prestarMaterial(int diasPrestamo) {
  if (disponible_) {
    disponible_ = false;
    std::cout << "Se ha prestado '" << titulo_ << "' por " << diasPrestamo
              << "días" << std::endl;
  } else {
    std::cerr << "Error: '" << titulo_ << "' ya esta prestado" << std::endl;
  }
}

void MaterialBibliografico::prestarMaterial() { prestarMaterial(5); }

void MaterialBibliografico::devolverMaterial() {
  if (disponible_) {
    std::cerr << "Error: '" << titulo_ << "' esta disponible" << std::endl;
  } else {
    disponible_ = true;
    std::cout << "Se ha devuelto '" << titulo_ << "'" << std::endl;
  }
}

void MaterialBibliografico::mostrarDetalle() { mostrarInformacion(); }

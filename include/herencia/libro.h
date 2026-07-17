#pragma once
#include "materialBibliografico.h"
#include <string>

class Libro : public MaterialBibliografico {
public:
  Libro(std::string titulo, std::string codigo, int anioPublicacion,
        std::string autor, int numeroPaginas);

  int calcularHorasLectura();
  void mostrarDetalle() override;

private:
  std::string autor_;
  int numeroPaginas_;
};

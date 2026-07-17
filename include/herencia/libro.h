#pragma once
#include "materialBibliografico.h"
#include <string>

class Libro : public MaterialBibliografico {
public:
  Libro(std::string titulo, std::string codigo, int anioPublicacion,
        std::string autor, int numeroPaginas);

  void mostrarDetalle() override;
  void calcularTiempoLectura();

private:
  std::string autor;
  int numeroPaginas;
};

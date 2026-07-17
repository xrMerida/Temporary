#pragma once
#include "materialBibliografico.h"
#include <string>

class Revista : public MaterialBibliografico {
public:
  Revista(std::string titulo, std::string codigo, int anioPublicacion,
          std::string categoria, int numeroEdicion);

  void mostrarCategoria();
  void mostrarDetalle() override;

private:
  std::string categoria_;
  int numeroEdicion_;
};

#pragma once
#include <string>

class MaterialBibliografico {
public:
  MaterialBibliografico(std::string titulo, std::string codigo,
                        int anioPublicacion);

  void mostrarInformacion();
  void prestarMaterial();
  void prestarMaterial(int diasPrestamo);
  void devolverMaterial();
  virtual void mostrarDetalle();

private:
  std::string titulo_;
  std::string codigo_;
  int anioPublicacion_;
  bool disponible_;
};

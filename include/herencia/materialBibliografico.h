#pragma once
#include <string>
#include <vector>

class MaterialBibliografico {
public:
  MaterialBibliografico(std::string titulo, std::string codigo,
                        int anioPublicacion);

  void mostrarInformacion();
  void prestarMaterial();
  void prestarMaterial(int diasPrestamo);
  void devolverMaterial();
  void mostrarHistorial();
  virtual void mostrarDetalle();

private:
  std::string titulo_;
  std::string codigo_;
  int anioPublicacion_;
  bool disponible_;
  std::vector<std::string> historial_;

  void registrarPrestamo(int dias);
};

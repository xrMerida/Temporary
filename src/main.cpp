#include "libro.h"
#include "revista.h"
#include <iostream>

using namespace std;

int main() {
  cout << "======================\n";
  cout << "=== BIBLIOTECA URL ===\n";
  cout << "======================\n";

  // Actividad 01: Crear dos libros
  Libro libro1("Cien Años de Soledad", "LIB001", 1967, "Gabriel García Márquez",
               471);
  Libro libro2("Don Quijote de la Mancha", "LIB002", 1605,
               "Miguel de Cervantes", 863);

  // Actividad 02: Crear dos revistas
  Revista revista1("National Geographic", "REV001", 2023, "Ciencia", 156);
  Revista revista2("NW Times", "REV002", 2023, "Noticias", 302);

  // Mostrar información general de los materiales
  cout << "\n=== INFORMACIÓN GENERAL ===\n";
  libro1.mostrarInformacion();
  cout << endl;
  libro2.mostrarInformacion();
  cout << endl;
  revista1.mostrarInformacion();
  cout << endl;
  revista2.mostrarInformacion();
  cout << endl;

  // Utilizar ambas versiones de prestarMaterial()
  cout << "=== PRÉSTAMOS ===\n";
  libro1.prestarMaterial();
  libro2.prestarMaterial(14);
  revista1.prestarMaterial();
  revista2.prestarMaterial(7);
  cout << endl;

  // Ejecutar mostrar detalle de cada objeto
  cout << "=== DETALLE DE MATERIALES ===\n";
  libro1.mostrarDetalle();
  cout << endl;
  libro2.mostrarDetalle();
  cout << endl;
  revista1.mostrarDetalle();
  cout << endl;
  revista2.mostrarDetalle();
  cout << endl;

  return 0;
}

/**
 * Dada una cantidad en pesos, obtener la equivalencia en dólares,
 * asumiendo que la unidad cambiaría es un dato desconocido.
*/

#include<iostream>

using namespace std;

int main() {
  float cantidadPesos, unidadCambiaria, equivalenciaDolares;

  /** Entrada: cantidad en pesos */
  cout << "Ingrese la cantidad en pesos: ";
  cin >> cantidadPesos;

  /**
   * Entrada: unidad cambiaria
   *  > Se podría hacer una llamada http a una api para obtener
   *    la unidad cambiaría, pero en este caso no es necesario.
  */
  cout << "Ingrese la unidad cambiaría: ";
  cin >> unidadCambiaria;

  equivalenciaDolares = cantidadPesos * unidadCambiaria;

  /** Salida: equivalencia en dólares */
  cout << "La equivalencia en dólares es " << equivalenciaDolares;

  return 0;
}

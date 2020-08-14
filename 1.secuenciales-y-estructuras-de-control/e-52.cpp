/**
 * Calcular e imprimir la tabla de multiplicar de un número cualquiera.
 * Imprimir el multiplicando, el multiplicador y el producto.
*/

#include <iostream>

using namespace std;

int main() {
  int index = 1;
  float numero;

  cout << "Ingresa el número de la tabla: ";
  cin >> numero;

  while (index <= numero) {
    cout << numero << " * " << index << " = " << (numero * index) << endl;

    index++;
  }

  return 0;
}

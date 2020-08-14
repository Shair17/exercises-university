/**
 * Leer 20 números e imprimir cuantos son  positivos, cuantos negativos y cuantos neutros.
*/

#include "iostream"

using namespace std;

int main() {
  float numero;
  int cNeutros = 0, cPositivos = 0, cNegativos = 0;
  int index = 1;

  while (index <= 5) {
    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero == 0) cNeutros += 1;
    else {
      if (numero > 0) cPositivos += 1;
      else cNegativos += 1;
    }

    index++;
  }

  cout << "Números Positivos: " << cPositivos << endl;
  cout << "Números Negativos: " << cNegativos << endl;
  cout << "Números Neutros:" << cNeutros << endl;

  return 0;
}

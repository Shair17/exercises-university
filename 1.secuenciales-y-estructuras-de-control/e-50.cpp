/**
 * Leer 15 números negativos y convertirlos a positivos e imprimir dichos números.
*/

#include "iostream"

using namespace std;

int main() {
  int index = 1;
  float numero;

  while (index <= 15) {
    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero > 0) {
      cout << "Solo puedes ingresar números negativos" << endl;
    } else {
      cout << numero << " fue convertido a positivo " << abs(numero) << endl;
    }

    index++;
  }

  return 0;
}

/**
 * Leer 10 números e imprimir solamente los números positivos
*/

#include "iostream"

using namespace std;

int main() {
  float numero;
  int index = 1;

  while (index <= 10) {
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero >= 0) cout << "Número positivo => " << numero << endl;

    index++;
  }

  return 0;
}

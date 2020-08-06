/**
 * Que lea dos números y los imprima en forma ascendente
*/

#include<iostream>

using namespace std;

int main() {
  float numero1, numero2;

  /** Entradas */
  cout << "Ingresa el primer número: ";
  cin >> numero1;

  cout << "Ingresa el segundo número: ";
  cin >> numero2;

  /** Salida */
  if (numero1 > numero2) {
    cout << "Número menor: " << numero2 << "\nNúmero mayor: " << numero1;
  } else {
    cout << "Número menor: " << numero1 << "\nNúmero mayor: " << numero2;
  }

  return 0;
}

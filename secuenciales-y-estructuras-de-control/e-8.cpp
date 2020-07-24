/**
 * Leer un número y escribir el valor absoluto del mismo.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
  float numero;

  cout << "Ingresa un numero: ";
  cin >> numero;

  numero = abs(numero);

  cout << "El valor absoluto es " << numero;

  return 0;
}


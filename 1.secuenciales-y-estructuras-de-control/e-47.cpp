/**
 * Leer 10 números y obtener su cubo y su cuarta.
*/

#include "iostream"
#include "math.h"

using namespace std;

int main() {
  int index = 1;
  double numero, cubo, cuarta;

  while (index <= 10) {
    cout << "Ingrese un número: ";
    cin >> numero;

    cubo = pow(numero, 3);
    cuarta = pow(numero, 4);

    cout << "El Cubo de " << numero << " es " << cubo << endl;
    cout << "La Cuarta de " << numero << " es " << cuarta << endl;

    index++;
  }

  return 0;
}

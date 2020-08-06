/**
 * Tres personas deciden invertir su dinero para fundar una empresa.
 * Cada una de ellas invierte una cantidad distinta.
 * Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida.
*/

// ✔️

#include<iostream>

using namespace std;

int main() {
  float inversion1, inversion2, inversion3, inversionTotal;

  /** Entradas: montos de inversión (1, 2, 3) */
  cout << "Ingrese el monto de inversión de la primera persona: ";
  cin >> inversion1;

  cout << "Ingrese el monto de inversión de la segunda persona: ";
  cin >> inversion2;

  cout << "Ingrese el monto de inversión de la tercera persona: ";
  cin >> inversion3;

  inversionTotal = inversion1 + inversion2 + inversion3;

  inversion1 *= 100 / inversionTotal;
  inversion2 *= 100 / inversionTotal;
  inversion3 *= 100 / inversionTotal;

  /** Salidas: porcentaje de inversión (1, 2, 3) */
  cout << "El porcentaje de inversión de la primera persona es " << inversion1 << "%" << endl;
  cout << "El porcentaje de inversión de la segunda persona es " << inversion2 << "%" << endl;
  cout << "El porcentaje de inversión de la tercera persona es " << inversion3 << "%";

  return 0;
}

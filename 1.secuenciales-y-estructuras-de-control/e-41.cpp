/**
 * Una frutería ofrece las manzanas con descuento según la siguiente tabla:
 * 
 *      N. Kilos comprados                % Descuento
 *        0 - 2                               0%
 *        2.01 - 5                            10%
 *        5.01 - 10                           15%
 *        10.01 en adelante                   20%
 * 
 * Determinar cuanto pagara una persona que compre manzanas es esa frutería.
*/

#include<iostream>

using namespace std;

int main() {
  float kilos, precioInicial, precioFinal, descuento;

  cout << "Ingrese la cantidad de manzanas en kilos compradas: ";
  cin >> kilos;

  cout << "Ingrese el precio inicial: ";
  cin >> precioInicial;

  if (kilos <= 2) descuento = 0;
  else {
    if (kilos >= 2.01 && kilos <= 5) descuento = 0.05;
    else {
      if (kilos >= 5.01 && kilos <= 10) descuento = 0.1;
      else descuento = 0.2;
    }
  }

  precioFinal = precioInicial * kilos - descuento * precioInicial * kilos;

  cout << "El precio a pagar es " << precioFinal;

  return 0;
}

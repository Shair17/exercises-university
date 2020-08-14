/**
 * Al cerrar un expendio de naranjas, 15 clientes que aun no han pagado recibirán
 * un 15% de descuento si compran más de 10 kilos. Determinar cuanto pagará cada
 * cliente y cuanto percibirá la tienda por esas compras.
*/

#include <iostream>

using namespace std;

int main() {
  int index = 1;
  float totalP = 0, costoKilo, kilosComprados, subtotal, descuento, total;

  cout << "Ingrese el valor de costo por kilo: ";
  cin >> costoKilo;

  while (index <= 15) {
    cout << "Ingrese el valor de kilos comprados: ";
    cin >> kilosComprados;

    subtotal = kilosComprados * costoKilo;

    if (kilosComprados > 10) {
      descuento = subtotal * .1;
    } else {
      descuento = 0;
    }

    total = subtotal - descuento;

    totalP += total;

    cout << "Valor de descuento: " << descuento << endl;
    cout << "Valor de subtotal: " << subtotal << endl;
    cout << "Valor de total: " << total << endl;
  }

  cout << "Valor de total percibido: " << totalP;

  return 0;
}

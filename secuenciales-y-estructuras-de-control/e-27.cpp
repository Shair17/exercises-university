/**
 * Una compañía de seguros esta abriendo un departamento de finanzas y estableció
 * un programa para captar clientes, que consiste en lo siguiente:
 *  Si el monto por el que se efectúa la fianza es menor que $50 000 la cuota a pagar será por el 3% del monto,
 *  y si el monto es mayor que $50 000 la cuota a pagar será el 2% del monto.
 * La afianzadora desea determinar cual será la cuota que debe pagar un cliente.
*/

#include<iostream>

using namespace std;

int main() {
  float monto, cuota, montoFinal;

  cout << "Ingresa el monto: ";
  cin >> monto;

  if (monto > 50000) cuota = .2;
  else cuota = .3;

  montoFinal = monto * cuota;

  cout << "La cuota a pagar es " << montoFinal;

  return 0;
}

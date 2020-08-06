/**
 * Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
 * Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
 * y si son menos de tres camisas un descuento del 10%
*/

#include<iostream>

using namespace std;

int main() {
  float precioCamisas, precioTotal, totalPagar;
  int cantidadCamisas;
  const float DESCUENTOS[2] = { .1, .2 };

  cout << "Ingrese la cantidad de camisas que compró: ";
  cin >> cantidadCamisas;

  cout << "Ingrese el precio por " << (cantidadCamisas > 1 ? "las camisas: " : "la camisa: ");
  cin >> precioCamisas;

  precioTotal = cantidadCamisas * precioCamisas;

  if (cantidadCamisas >= 3) totalPagar = precioTotal - (precioTotal * DESCUENTOS[1]);
  else totalPagar = precioTotal - (precioTotal * DESCUENTOS[0]);

  cout << "El total a pagar por " << (cantidadCamisas > 1 ? "las camisas es " : "la camisa es") << totalPagar;

  return 0;
}

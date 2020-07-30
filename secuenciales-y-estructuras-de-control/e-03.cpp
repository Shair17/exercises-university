/**
 * Una tienda ofrece un descuento del 15% sobre el total de la compra
 * y un cliente desea sabercuanto deberá pagar finalmente por su compra.
*/

// ✔️

#include<iostream>

using namespace std;

int main() {
  float totalCompra, totalPagar, totalDescuento;
  const float DESCUENTO = .15;

  cout << "Ingresa el monto de tu compra: ";
  cin >> totalCompra;

  totalDescuento = totalCompra * DESCUENTO;

  totalPagar = totalCompra - totalDescuento;

  cout << "El total a pagar es de " << totalPagar;

  return 0;
}

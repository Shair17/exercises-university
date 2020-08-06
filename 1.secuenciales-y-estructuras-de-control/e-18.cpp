/**
 * En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $1000
 * ¿Cual será la cantidad que pagara una persona por su compra?
*/

#include<iostream>

using namespace std;

int main() {
  float precioCompra, precioFinal, desc;
  const float DESCUENTO = .2;

  cout << "Ingrese precio de compra: ";
  cin >> precioCompra;

  if (precioCompra > 1000) {
    cout << "Felicidades, aplicas para un descuento del " << DESCUENTO * 100 << "%";

    desc = precioCompra * DESCUENTO;
    precioFinal = precioCompra - desc;

    cout << "Ahora pagarás: " << precioFinal;
  } else {
    cout << "Lo siento, no aplicas para el descuento :(";
    cout << "Vas a pagar " << precioCompra;
  }

  return 0;
}

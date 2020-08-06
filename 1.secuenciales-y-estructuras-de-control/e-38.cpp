/**
 * En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá
 * del número de computadoras que compre. Si las computadoras son menos de cinco se les dará
 * un 10% de descuento sobre el total de la compra; si el número de computadoras
 * es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento;
 * y si son 10 o más se les da un 40% de descuento.
 * El precio de cada computadora es de $11,000
*/

#include<iostream>

using namespace std;

int main() {
  float precioInicial, precioFinal, descuento;
  float descuentos[3] = { .1, .25, .4 };
  int cantidadDePCs, pricePerPC = 11000;

  cout << "Ingresa la cantidad de computadora(s) que compraste: ";
  cin >> cantidadDePCs;

  precioInicial = cantidadDePCs * pricePerPC;

  if (cantidadDePCs < 5) descuento = precioInicial * descuentos[0];
  else if (cantidadDePCs >= 5 && cantidadDePCs < 10) descuento = precioInicial * descuentos[1];
  else descuento = precioInicial * descuentos[2];

  precioFinal = precioInicial - descuento;

  cout << "El total a pagar por " << cantidadDePCs << (cantidadDePCs <= 1 ? " computadora " : " computadoras") << " es de " << precioFinal << endl;

  return 0;
}

/**
 * Hacer un algoritmo que imprima el nombre de un artículo, clave, precio original y
 * su precio con descuento. El descuento lo hace en base a la clave, si la clave es 01
 * el descuento es del 10% y si la clave es 02 el descuento en del 20% (solo existen dos claves).
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
  float precio, precioDescuento;
  string nombreArticulo;
  int clave;
  const int claves[2] = { 1, 2 };
  const float DESCUENTOS[2] = { .1, .2 };

  cout << "Nombre del artículo: ";
  cin >> nombreArticulo;

  cout << "Ingrese la clave: ";
  cin >> clave;

  cout << "Ingrese precio del artículo: ";
  cin >> precio;

  if (clave == claves[0]) precioDescuento = precio - (precio * DESCUENTOS[0]);
  else precioDescuento = precio - (precio * DESCUENTOS[1]);

  cout << "El descuento para el artículo " << nombreArticulo << " es " << precioDescuento;

  return 0;
}

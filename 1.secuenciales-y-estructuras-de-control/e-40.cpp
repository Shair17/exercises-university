/**
 * Un proveedor de estéreos ofrece un descuento del 10% sobre el precio sin IVA,
 * de algún aparato si este cuesta $2000 o mas.
 * Además, independientemente de esto, ofrece un 5% de descuento si  la marca es “NOSY”.
 * Determinar cuanto pagara, con IVA incluido, un cliente cualquiera por la compra de su aparato.
*/

#include <iostream>

using namespace std;

int main() {
  string marca;
  float precio, precioFinal;

  cout << "Ingrese la marca: ";
  cin >> marca;

  cout << "Ingrese el precio del producto: ";
  cin >> precio;

  if (precio >= 2000) precioFinal = precio - (precio * .1);
  else precioFinal = precio + (precio * .19);

  if (marca == "nosy") precioFinal -= precio * .05;

  cout << "El precio final del producto es " << precioFinal;

  return 0;
}

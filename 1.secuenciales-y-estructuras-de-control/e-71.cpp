/**
 * En una tienda de descuento las personas que van a pagar el importe
 * de su compra llegan a la caja y sacan una bolita de color,
 * que les dirá que descuento tendrán sobre el total de su compra.
 * Determinar la cantidad que pagara cada cliente desde que la tienda
 * abre hasta que cierra.
 * Se sabe que si el color de la bolita es roja el cliente obtendrá
 * un 40% de descuento; si es amarilla un 25% y si es blanca no obtendrá descuento.
*/

#include <iostream>

using namespace std;

int main() {
  float precio, p1, p2, descuento1, descuento2;
  bool tiendaEstado = true;
  string color, tienda;

  while (tiendaEstado) {
    cout << "Ingrese el precio de su compra: ";
    cin >> precio;

    cout << "Ingrese el color de la bola (roja, amarilla, blanca): ";
    cin >> color;

    if (color == "roja") {
      p1 = precio * .4;
      descuento1 = precio - p1;
      cout << "El total de su compra es " << descuento1 << endl;
    }

    if (color == "amarilla") {
      p2 = precio * .25;
      descuento2 = precio - p2;
      cout << "El total de su compra es " << descuento2 << endl;
    }

    if (color == "blanca") {
      cout << "Su compra no tiene descuento, el total es " << precio << endl;
    }

    cout << "¿La tienda estará cerrada o abierta? (ingresar cerrada o abierta) ";
    cin >> tienda;

    if (tienda == "abierta") tiendaEstado = true;
    else if (tienda == "cerrada") tiendaEstado = false;
    else cout << "Ingresa un estado valido (cerrada o abierta)";
  }

  return 0;
}

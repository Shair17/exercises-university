/**
 * El dueño de una tienda compra un artículo a un precio determinado.
 * Obtener el precio en que lo debe vender para obtener una ganancia del 30%.
*/

#include<iostream>

using namespace std;

int main() {
  float precio;
  const float PORCENTAJE_GANANCIA = .3;

  cout << "Ingresa el precio inicial: ";
  cin >> precio;

  // Se puede hacer esto o crear una nueva variable de tipo float para guardar el resultado final
  precio += precio * PORCENTAJE_GANANCIA;

  cout << "El precio para vender es: " << precio;

  return 0;
}

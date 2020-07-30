/**
 * Una empresa de bienes raíces ofrece casas de interés social, bajo las siguientes condiciones:
 * 
 *  Si los ingresos del comprador son menores de $8000 o mas el enganche será del 15% del costo de la casa
 *  y el resto se distribuirá en pagos mensuales, a pagar en diez años.
 *  Si los ingresos del comprador son mayores de $8000 o mas el enganche será del 30% del costo de la casa
 *  y el resto se distribuirá en pagos mensuales a pagar en 7 años.
 * 
 * La empresa quiere obtener cuanto debe pagar un comprador por concepto de enganche y cuanto por cada pago parcial.
*/

#include<iostream>

using namespace std;

int main() {
  float costoCasa, ingresos, enganche, pagoParcial;
  int mensualidades;
  const float PORCENTAJES[2] = { .15, .3 };

  cout << "Ingrese costo de la casa: ";
  cin >> costoCasa;

  cout << "Ingresa tus ingresos: ";
  cin >> ingresos;

  if (ingresos < 8000) {
    enganche = costoCasa * PORCENTAJES[0];
    mensualidades = 120; // 120 meses.
  } else {
    enganche = costoCasa * PORCENTAJES[1];
    mensualidades = 84;
  }

  pagoParcial = (costoCasa - enganche) / mensualidades;

  cout << "El enganche es " << enganche;
  cout << "Las mensualidades " << mensualidades;
  cout << "El pago parcial es " << pagoParcial;

  return 0;
}

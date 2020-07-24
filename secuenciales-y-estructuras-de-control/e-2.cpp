/**
 * Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas,
 * el vendedor desea saber cuanto dinero obtendrá por concepto de comisiones por
 * las tres ventas que realiza en el mes y el total que recibirá en el mes
 * tomando en cuenta su sueldo base y comisiones.
*/

#include<iostream>

using namespace std;

int main() {
  float sueldoBase, venta1, venta2, venta3, ventasTotal, conceptoComisiones, conceptoSueldo;
  const float COMISION = .1;

  /** Entradas: sueldoBase, ventas(1, 2, 3) */
  cout << "Ingresar el sueldo base: ";
  cin >> sueldoBase;

  cout << "Ingresar venta 1: ";
  cin >> venta1;

  cout << "Ingresar venta 2: ";
  cin >> venta2;

  cout << "Ingresar venta 3: ";
  cin >> venta3;

  ventasTotal = venta1 + venta2 + venta3;

  conceptoComisiones = ventasTotal * COMISION;

  conceptoSueldo = sueldoBase + conceptoComisiones;

  /** Salidas: concepto comisiones, concepto sueldo */
  cout << "Dinero obtenido por concepto de comisiones es " << conceptoComisiones << " y el total que recibirás es " << conceptoSueldo;

  return 0;
}

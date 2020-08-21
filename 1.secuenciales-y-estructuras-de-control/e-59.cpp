/**
 * Una compañía de seguros tiene contratados a n vendedores.
 * Cada uno hace tres ventas a la semana.
 * Su política de pagos es que un vendedor recibe un sueldo base,
 * y un 10% extra por comisiones de sus ventas.
 * El gerente de su compañía desea saber cuánto dinero obtendrá en la semana
 * cada vendedor por concepto de comisiones por las tres ventas realizadas,
 * y cuanto tomando en cuenta su sueldo base y sus comisiones.
*/

#include <iostream>

using namespace std;

int main() {
  int numeroVendedores, index = 0;

  float venta1, venta2, venta3,
        comisionV1, comisionV2, comisionV3,
        totalComisiones, totalVentas,
        sueldoBase, sueldoTotal;

  cout << "Ingrese el número de vendedores: ";
  cin >> numeroVendedores;

  cout << "Ingrese el sueldo base de los empleados: ";
  cin >> sueldoBase;

  while (index < numeroVendedores) {
    cout << "Ingrese el valor de la primera venta: ";
    cin >> venta1;

    cout << "Ingrese el valor de la segunda venta: ";
    cin >> venta2;

    cout << "Ingrese el valor de la tercera venta: ";
    cin >> venta3;

    /** This could be more easier with a loop */
    comisionV1 = venta1 * .1;
    comisionV2 = venta2 * .1;
    comisionV3 = venta3 * .1;

    /** This could be more easier with a loop */
    sueldoTotal = venta1 + venta2 + venta3 + comisionV1 + comisionV2 + comisionV3 + sueldoBase;
    totalComisiones = comisionV1 + comisionV2 + comisionV3;
    totalVentas = venta1 + venta2 + venta3 + totalComisiones;

    cout << "El suelto total del empleado es " << sueldoTotal << endl;

    cout << "El valor total por comisiones es " << totalComisiones << endl;

    cout << "El valor total de comisiones y ventas es " << totalVentas << endl;

    index++;
  }

  return 0;
}

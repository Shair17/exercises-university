/**
 * En una escuela la colegiatura de los alumnos se determina según el número de materias que cursan.
 * El costo de todas las materias es el mismo. Se ha establecido un programa para estimular a los alumnos,
 * el cual consiste en lo siguiente:
 * 
 *  Si el promedio obtenido por un alumno en el último periodo es mayor o igual que 9,
 *  se le hará un descuento del 30% sobre la colegiatura y no se le cobrara IVA;
 * 
 *  Si el promedio obtenido es menor que 9 deberá pagar la colegiatura completa,
 *  la cual incluye el 10% de IVA.
 * 
 * Obtener cuanto debe pagar un alumno.
*/

#include<iostream>

using namespace std;

int main() {
  float promedio, iva, numeroMaterias, costoMateria, colegiatura, colegiaturaPagar;
  const float DESCUENTO = .3;
  const float IVA_PORCENTAJE = .1;

  cout << "Ingresa tu promedio: ";
  cin >> promedio;

  cout << "Ingresa el IVA : ";
  cin >> iva;

  cout << "Ingresa el número de materias: ";
  cin >> numeroMaterias;

  cout << "Ingresa el costo de materia: ";
  cin >> costoMateria;

  colegiatura = numeroMaterias * costoMateria;

  if (promedio >= 9) {
    colegiaturaPagar = colegiatura - (colegiatura * DESCUENTO);
  } else {
    colegiaturaPagar = colegiatura - (iva * IVA_PORCENTAJE);
  }

  cout << "Debes pagar " << colegiaturaPagar;

  return 0;
}

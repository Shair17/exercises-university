/**
 * En un hospital existen tres áreas:
 * Ginecología, Pediatría, Traumatología.
 * 
 * El presupuesto anual del hospital se reparte conforme a la siguiente tabla:
 * 
 * Área            -   Porcentaje del presupuesto
 * Ginecología     -             40%
 * Traumatología   -             30%
 * Pediatría       -             30%
*/

#include<iostream>

using namespace std;

int main() {
  float presupuestoAnual;
  float presupuestoGinecologia = 0.4, presupuestoTraumatologia = 0.3, presupuestoPediatría = 0.3;

  cout << "Ingrese el presupuesto anual: ";
  cin >> presupuestoAnual;

  if (presupuestoAnual) {
    /**
     * Supongamos que el usuario ingresa por ejemplo ´1000´ de presupuesto anual entonces
     * el presupuesto para Ginecologia sera: 1000 * .4
     * el presupuesto para Traumatologia sera: 1000 * .3
     * el presupuesto para Pediatria sera: 1000 * .3
    */
    presupuestoGinecologia *= .4;
    presupuestoTraumatologia *= .3;
    presupuestoPediatría *= .3;

    cout << "\033[1;31mbold Presupuesto Anual:" << presupuestoAnual << "\033[0m\n";
    cout << "El presupuesto para Ginecología será " << presupuestoGinecologia;
    cout << "El presupuesto para Traumatología será " << presupuestoTraumatologia;
    cout << "El presupuesto para Pediatría será " << presupuestoPediatría;
  }

  return 0;
}


/**
 * El dueño de una empresa desea planificar las decisiones financieras que tomara en el siguiente año. La manera de planificarlas depende de lo siguiente:
 * Si actualmente su capital se encuentra con saldo negativo, pedirá un préstamo bancario para que su nuevo saldo sea de $10000. Si su capital tiene actualmente un saldo positivo pedirá un préstamo bancario para tener un nuevo saldo de $20000, pero si su capital tiene actualmente un saldo superior a los $20 000 no pedirá ningún préstamo.
 * Posteriormente repartirá su presupuesto de la siguiente manera.
 * $5 000 para equipo de computo
 * $2 000 para mobiliario
 * y el resto la mitad será para la compra de insumos y la otra para otorgar incentivos al personal.
 * Desplegar que cantidades se destinaran para la compra de insumos e incentivos al personal y, en caso de que fuera necesario, a cuanto ascendería la cantidad que se pediría al banco.
*/

#include<iostream>

using namespace std;

int main() {
  float capitalActual, prestamo, resto, insumos, incentivos;

  cout << "Escribir capital actual: ";
  cin >> capitalActual;

  if (capitalActual <= 0) {
    prestamo = (10000 - capitalActual);
    cout << "Prestamo " << prestamo;
    resto = (capitalActual - 7000);
    insumos = resto / 2;
    incentivos = resto - insumos;
    cout << "5000 para computo";
    cout << "Mobiliario 2000";
    cout << "Insumos " << insumos;
    cout << "Incentivos " << incentivos;
  } else {
    if (capitalActual > 0 && capitalActual < 20000) {
      prestamo = 20000 - capitalActual;
      cout << "Prestamo " << prestamo;
      resto = capitalActual - 7000;
      insumos = resto / 2;
      incentivos = resto - insumos;
      cout << "5000 para computo";
      cout << "Mobiliario 2000";
      cout << "Insumos " << insumos;
      cout << "Incentivos " << incentivos;
    } else {
      cout << "No pedirá prestamo";
      cout << "5000 para computo";
      resto = capitalActual - 7000;
      insumos = resto / 2;
      incentivos = resto - insumos;
      cout << "Equipo de computo 5000";
      cout << "Mobiliario 2000";
      cout << "Insumos " << insumos;
      cout << "Incentivos " << incentivos;
      cout << "Resto " << resto;
    }
  }

  return 0;
}

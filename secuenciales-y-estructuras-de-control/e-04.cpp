/**
 * Un alumno desea saber cual será su calificación final en la materia de Algoritmos.
 * Dicha calificación se compone de los siguientes porcentajes:
 *    - 55% del promedio de sus tres calificaciones parciales.
 *    - 30% de la calificación del examen final.
 *    - 15% de la calificación de un trabajo final.
*/

// ✔️

#include<iostream>

using namespace std;

int main() {
  float parcial1, parcial2, parcial3, examenFinal, trabajoFinal;
  float promedioParciales, promedioExamenFinal, promedioTrabajoFinal, calificacionFinal;
  const float CALIFICACION_PARCIALES = .55, CALIFICACION_EXAMEN = .3, CALIFICACION_TRABAJO = .15;

  /** Entrada: Parciales(1, 2, 3) */
  cout << "Ingresa la calificacion del primer parcial: ";
  cin >> parcial1;

  cout << "Ingresa la calificacion del segundo parcial: ";
  cin >> parcial2;

  cout << "Ingresa la calificacion del tercer parcial: ";
  cin >> parcial3;


  /** Entrada: Examen Final */
  cout << "Ingresa la calificacion del examen final: ";
  cin >> examenFinal;

  /** Entrada: Trabajo Final */
  cout << "Ingresa la calificacion del trabajo final: ";
  cin >> trabajoFinal;

  promedioParciales = (parcial1 + parcial2 + parcial3) / 3;
  promedioParciales *= CALIFICACION_PARCIALES;

  promedioExamenFinal = examenFinal * CALIFICACION_EXAMEN;

  promedioTrabajoFinal = trabajoFinal * CALIFICACION_TRABAJO;

  calificacionFinal = promedioParciales + promedioExamenFinal + promedioTrabajoFinal;

  /** Salida: Calificacion Final */
  cout << "La calificacion final en la materia de algoritmos es de " << calificacionFinal;

  return 0;
}

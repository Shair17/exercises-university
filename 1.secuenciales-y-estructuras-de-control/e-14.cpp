/**
 * Un alumno desea saber cual será su promedio general en las tres materias
 * mas difíciles que cursa y cual será el promedio que obtendrá en cada una de ellas.
 * Estas materias se evalúan como se muestra a continuación:
 * 
 *  La calificación de Matemáticas se obtiene de la siguiente manera:
 *    Examen 90%
 *    Promedio de tareas 10%
 * 
 *    En esta materia se pidió un total de tres tareas.
 * 
 *  La calificación de Física se obtiene de la siguiente manera:
 *    Examen 80%
 *    Promedio de tareas 20%
 * 
 *    En esta materia se pidió un total de tres tareas.
 * 
 *  La calificación de Química se obtiene de la siguiente manera:
 *    Examen 85%
 *    Promedio de tareas 15%
 * 
 *    En esta materia se pidió un promedio de tres tareas.
 * 
 * Calcular el promedio de un alumno cualquiera por asignatura y total.
*/

#include<iostream>

using namespace std;

int main() {
  float examenM, tareaM1, tareaM2, tareaM3,
        examenF, tareaF1, tareaF2, tareaF3,
        examenQ, tareaQ1, tareaQ2, tareaQ3;
  const float PORCENTAJE_EXAMEN_M = .9, PORCENTAJE_TAREAS_M = .1, PORCENTAJE_EXAMEN_F = .8, PORCENTAJE_TAREAS_F = .2, PORCENTAJE_EXAMEN_Q = .85, PORCENTAJE_TAREAS_Q = .15;

  float promedioExamenM, promedioNotasM, promedioM,
        promedioExamenF, promedioNotasF, promedioF,
        promedioExamenQ, promedioNotasQ, promedioQ,
        promedioTotal;

  /** Dato dado */
  int totalTareas = 3;

  /** Entradas: exámenes (Matemática, Física, Química) y tareas (Matemática, Física, Química) */
  cout << "Ingrese la nota del exámen de matemáticas: ";
  cin >> examenM;

  cout << "Ingrese la primera nota de la tarea de matemáticas";
  cin >> tareaM1;
  cout << "Ingrese la segunda nota de la tarea de matemáticas";
  cin >> tareaM2;
  cout << "Ingrese la tercera nota de la tarea de matemáticas";
  cin >> tareaM3;

  cout << "Ingrese la nota del exámen de física: ";
  cin >> examenF;

  cout << "Ingrese la primera nota de la tarea de física";
  cin >> tareaF1;
  cout << "Ingrese la segunda nota de la tarea de física";
  cin >> tareaF2;
  cout << "Ingrese la tercera nota de la tarea de física";
  cin >> tareaF3;

  cout << "Ingrese la nota del exámen de química: ";
  cin >> examenQ;

  cout << "Ingrese la primera nota de la tarea de química";
  cin >> tareaQ1;
  cout << "Ingrese la segunda nota de la tarea de química";
  cin >> tareaQ2;
  cout << "Ingrese la tercera nota de la tarea de química";
  cin >> tareaQ3;


  /** PROCESO */
  promedioExamenM = examenM * PORCENTAJE_EXAMEN_M;
  promedioNotasM = (tareaM1 + tareaM2 + tareaM3) / totalTareas * PORCENTAJE_TAREAS_M;
  promedioM = promedioExamenM + promedioNotasM;

  promedioExamenF = examenF * PORCENTAJE_EXAMEN_F;
  promedioNotasF = (tareaF1 + tareaF2 + tareaF3) / totalTareas * PORCENTAJE_TAREAS_F;
  promedioF = promedioExamenF + promedioNotasF;

  promedioExamenQ = examenQ * PORCENTAJE_EXAMEN_Q;
  promedioNotasQ = (tareaQ1 + tareaQ2 + tareaQ3) / totalTareas * PORCENTAJE_TAREAS_Q;
  promedioQ = promedioExamenQ + promedioNotasQ;

  promedioTotal = (promedioM + promedioF + promedioQ) / 3;

  /** Salidas: promedio matemáticas, promedio física, promedio química, promedio general */
  cout << "El promedio de matemáticas es " << promedioM;
  cout << "El promedio de física es " << promedioF;
  cout << "El promedio de química es " << promedioQ;

  cout << "El promedio general es " << promedioTotal;

  return 0;
}

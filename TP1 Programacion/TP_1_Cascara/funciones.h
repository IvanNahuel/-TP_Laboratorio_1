#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int Sumar(int ,int );
/** \brief pasando dos numeros enteros, los suma entre ellos
 *
 * \param   posee como parametro dos numeros enteros enteros
 *
 * \return devuelve la suma de los dos numeros enteros

*/
int Restar(int numero1, int numero2);

/** \brief recibe dos numeros enteros, y los resta entre ellos
 *
 * \param  posee como parametro dos numeros enteros
 *
 * \return devuelve la resta de los numeros enteros

*/
int Multiplicar(int numero1, int numero2);
/** \brief recibe dos numeros enteros, y los multiploca entre si
 *
 * \param  posee como parametro dos numeros enteros
 *
 * \return devuelve la multiplicacion de los numeros enteros

*/
float Dividir (float numero1, float numero2);
/** \brief recibe dos numeros decimales, y los divide entre si (tambien puede recibir dos ceros enteros)
 *
 * \param  posee como parametro dos numeros decimales
 *
 * \return devuelve la division de los numeros decimales

*/
int Factorear (int numeroFact);
/** \brief recibe un numero entero y lo factoriza por si el numero pasado es mayor a 0.
 *
 * \param  posee como parametro un numero entero
 *
 * \return devuelve la factorizacion del entero cargado a la funcion

*/
void HacerTodasLasOperaciones(float numero1, float numero2);
/** \brief recibe dos Numeros y ejecuta todas las funciones asignadas a operaciones matematicas
 *
 * \param  posee como parametro dos numeros enteros
 *
 * \return no devuelve nada

*/
void IngresarNumero (float *num1);
/** \brief recibe una direccion de memoria y pide un numero por consola y settea a lo que apunta esa direccion
 *
 * \param  posee como parametro una direccion de memoria de tipo flotante
 *
 * \return no devuelve nada

*/

void IngresarSegudo (float *num2);
/** \brief recibe una direccion de memoria y pide un numero por consola y settea a lo que apunta esa direccion
 *
 * \param  posee como parametro una direccion de memoria de tipo flotante
 *
 * \return no devuelve nada

*/
#endif // FUNCIONES_H_INCLUDED

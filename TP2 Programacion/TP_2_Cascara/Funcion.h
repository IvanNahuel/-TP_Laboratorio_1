#ifndef Funcion_H_INCLUDED
#define Funcion_H_INCLUDED


typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * param lista: el array se pasa como parametro.
 */
int ObtenerEspacioLibre(EPersona lista[], int tam);
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * param lista: el array se pasa como parametro. dni: el dni a ser buscado en el array.
 */
int BuscarPorDni(EPersona lista[], int dni, int tam);

/** \brief recibe una estructura pasado como parametro, y numero que define el tamaño del array
 *
 * \param  posee como parametro dato de tipo ePersona y entero
 *
 * \return No devuelve nada
*/
void altaPersonas(EPersona vec[],int tam);

/** \brief recibe una estructura pasado como parametro, y numero que define el tamaño del array
 *
 * \param  posee como parametro dato de tipo ePersona y entero
 *
 * \return No devuelve nada
*/

void inicializarPersonar(EPersona vec[],int tam);

/** \brief recibe una estructura pasado como parametro, y numero que define el tamaño del array, otro numero entero que define el DNI
 *
 * \param  posee como parametro dato de tipo ePersona y dos enteros
 *
 * \return No devuelve nada
*/
void BajarPersona (EPersona vec[],int tam,int dni);

/** \brief recibe una estructura pasado como parametro, y numero que define el tamaño del array.
 *
 * \param  posee como parametro dato de tipo ePersona y un entero
 *
 * \return No devuelve nada
*/

void ImprimirPersonas (EPersona vec[],int tam);

/** \brief recibe una estructura pasado como parametro, y numero que define el tamaño del array.
 *
 * \param  posee como parametro dato de tipo ePersona y un entero
 *
 * \return No devuelve nada
*/

void GraficoEdades(EPersona vec[],int tam) ;











#endif

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"

int Seguir(char seguimos);

int main(){
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;

    float *pNum1;
    float *pNum2;

    float resultado;

    int flagMenu=1;
    int flagMostrarCuatro=0;
    int respuesta;
    int *pResp;

    float r1;
    float r2;
    float r3;
    float r4;
    int r5;

    pNum1=&numero1;
    pNum2=&numero2;
    pResp=&respuesta;

    if (flagMenu){
        IngresarNumero(pNum1);
        IngresarSegudo(pNum2);
    }

    while(seguir=='s'){

        MostrarMenu();
        RespuestaMenu(pResp);
        printf("%d",respuesta);

        switch (respuesta){
        case  1:
            IngresarNumero(pNum1);
            break;
        case 2:
            IngresarSegudo(pNum2);

            break;
        case 3:
            mostrarMenuDeOpcionesTres(numero1,numero2);
            RealizarTodasLasOperaciones(&r1,&r2,&r3,&r4,&r5,numero1,numero2);
            flagMostrarCuatro=1;
            printf("\n-----Operaciones calculadas con exito");
            break;
        case 4:
            if (flagMostrarCuatro){
            MostrarTodosLosResultados(r1,r2,r3,r4,r5,numero1,numero2);
            }else {
            printf("\nError, primero debe realizar todas las operaciones para mostrar");
            }

            break;
        case 5:
            seguir='n';
            break;
        }
        flagMenu =0;
    }
}














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
    float resultado;

    int numeroFact;
    int resultadoFact;

    int respuesta =1;

    float TodasLasOP;

    int option;

    int responseFactor=1;


    while(seguir=='s'){
        printf("Ingrese el primer numero \n");
        scanf("%f",&numero1);
        printf("Ingrese el segundo numero \n");
        scanf("%f",&numero2);

        printf("Elija un numero correspondiente a la opreacion que desea realizar \n");
        printf(" 1- Suma + \n");
        printf(" 2- Resta - \n");
        printf(" 3- Multiplicacion * \n");
        printf(" 4- Division / \n");
        printf(" 5- Factorial ! \n");
        printf(" 6- Hacer todas las operaciones \n");

        scanf("%d",&opcion);

        while (opcion <1 || opcion >6){
            printf("Error Reingrese la opcion correcta [De 1 a 6] \n");
            printf(" 1- Suma + \n");
            printf(" 2- Resta - \n");
            printf(" 3- Multiplicacion * \n");
            printf(" 4- Division / \n");
            printf(" 5- Factorial ! \n");
            printf(" 6- Hacer todas las operaciones \n");

            scanf("%d",&opcion);
        }

        switch(opcion){
            case 1:
            resultado = Sumar(numero1, numero2);
            printf("El resultado de la suma de ( %.f + %.f ) es %.f \n \n",numero1,numero2,resultado);
                break;
            case 2:
            resultado = Restar(numero1, numero2);
            printf("El resultado de la resta de ( %.f - %.f ) es %.f \n \n",numero1,numero2,resultado);
                break;
            case 3:
            resultado = Multiplicar(numero1, numero2);
            printf("El resultado de la multiplicacion ( %.f * %.f )es %.f \n \n",numero1,numero2,resultado);
                break;
            case 4:
            while (numero2==0){
                printf("Error no se puede dividir un numero por 0, Reingrese divisor \n ");
                scanf("%f",&numero2);
            }
            resultado = Dividir(numero1, numero2);
            printf("El resultado de la division ( %.f / %.f )es %.2f \n",numero1,numero2,resultado);
                break;
            case 5:
                printf("Desea operar el factorial de %.f \n",numero1);
                printf(" 1- Si \n");
                printf(" 2- No \n");
                scanf("%d",&responseFactor);

                while (!(responseFactor == 1 || responseFactor ==2)){
                        printf("Error Reingrese la opcion corecta [1 o 2] \n");
                        printf(" 1- Si \n");
                        printf(" 2- No \n");
                        scanf("%d",&responseFactor);
                }
                switch (responseFactor){
                    case 1:
                    resultadoFact = (int) Factorear(numero1);
                    printf("El resultado de la factorizacion de %d es %d \n",(int)numero1,resultadoFact);
                    break;

                    case 2:
                printf("Ingrese el numero que desea factorizar \n \n");
                scanf("%d",&numeroFact);

            while (numeroFact<=-1){
                printf("Error, no se puede factorizar numeros negativos, Reingrese numero \n");
                scanf("%d",&numeroFact);
            }
            resultadoFact = Factorear(numeroFact);
            printf("El resultado de la factorizacion de %d es %d \n",numeroFact,resultadoFact);
                }
                break;
            case 6:
              TodasLasOP = HacerTodasLasOperaciones(numero1, numero2);
              break;
        }
        printf("Desea seguir operando? \n");
        printf(" 1- SI \n");
        printf(" 2- No \n");
        scanf("%d",&option );
        while (!(option == 1 || option ==2)){
                printf("Error Reingrese la opcion corecta ,Desea seguir operando? [1 o 2] \n");
                printf(" 1- Si \n");
                printf(" 2- No \n");
                scanf("%d",&option);

        if (option ==1){
            seguir='s';
        } else if (option ==2){
            seguir='n';
            }
        }
    }
}














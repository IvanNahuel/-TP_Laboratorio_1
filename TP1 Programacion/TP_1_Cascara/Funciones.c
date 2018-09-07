int Sumar(int numero1, int numero2){
    int retorno;                        //variable que dara valor a la funcion
    retorno = numero1 + numero2;        //suma entre los dos numeros
    return retorno;                     //devolucion de la funcion
}

int Restar(int numero1, int numero2){
    int retorno;
    retorno = numero1 - numero2;
    return retorno;
}

int Multiplicar(int numero1, int numero2){
    int retorno;
    retorno = numero1 * numero2;
    return retorno;
}

float Dividir (float numero1,float numero2){
    while (numero2==0){
        printf("Error no se puede dividir un numero por 0, Reingrese divisor \n ");
        scanf("%f",&numero2);
        }
    float retorno;
    retorno = numero1 / numero2;
    return   retorno;
}

int Factorear (int numeroFact){
int fact =-1;

if (numeroFact >0 ){
    fact = 1;
    for ( int i =1; i <=numeroFact; i++){
        fact =fact*i;
        }
    }
return fact;
}

void HacerTodasLasOperaciones(float numero1, float numero2){
                float resultado;
                resultado = Sumar(numero1, numero2);
                printf("El resultado de la suma es %.f \n \n",resultado);
                resultado = Restar(numero1, numero2);
                printf("El resultado de la resta es %.f \n \n",resultado);
                resultado = Multiplicar(numero1, numero2);
                printf("El resultado de la multiplicacion es %.f \n \n",resultado);
                resultado = Dividir(numero1, numero2);
                printf("El resultado de la division es %.2f \n \n",resultado);
                resultado = Factorear(numero1);
                printf("el resultado de la factorizacion es %.f \n\n",resultado);
}
void RealizarTodasLasOperaciones (float*r1, float*r2, float*r3, float*r4, int*r5,float numero1,float numero2){
    *r1 = Sumar(numero1, numero2);
    *r2 = Restar(numero1, numero2);
    *r3 = Multiplicar(numero1, numero2);
    *r4 = Dividir(numero1, numero2);
    *r5 = Factorear(numero1);
}
void MostrarTodosLosResultados(float r1, float r2, float r3, float r4, int r5,float numero1,float numero2){
            printf("\nEl resultado de (%.0f)+(%.0f) es %.0f",numero1,numero2, r1);
            printf("\nEl resultado de (%.0f)-(%.0f) es %.0f",numero1,numero2,r2);
            printf("\nEl resultado de (%.0f)*(%.0f) es %.0f",numero1,numero2,r3);
            printf("\nEl resultado de (%.2f)/(%.0f) es %.3f",numero1,numero2,r4);
            printf("\nEl factorial de (%.0f) es %d",numero1,r5);
}





void IngresarNumero (float *num1){
        printf("Ingresar primer operando (A=X):  ");
        scanf("%f",num1);
        printf("\n");
}
void IngresarSegudo (float *num2){
        printf("\nIngresar el segundo operando (B=Y):  ");
        scanf("%f",num2);
}
void mostrarMenuDeOpcionesTres(float numero1,float numero2){
    printf("\nCalcular la suma (%.0f)+(%.0f)",numero1,numero2);
    printf("\nCalcular la resta (%.0f)+(%.0f)",numero1,numero2);
    printf("\nCalcular la division (%.1f)+(%.1f)",numero1,numero2);
    printf("\nCalcular la multiplicacion (%.0f)+(%.0f)",numero1,numero2);
    printf("\nCalcular el factorial (%.0f)",numero1);


}
void MostrarMenu(){
    printf("\n1-Ingresar primer operando (A=X):  ");
    printf("\n2-Ingresar el segundo operando (B=Y):  ");
    printf("\n3-Calcular todas las operaciones :");
    printf("\n4-Informar resultados :");
    printf("\n5-Salir :");

}
void RespuestaMenu(int *pResp){
    printf("\nIngrese su respuesta: ");
    scanf("%d",pResp);

        while (*pResp<1||*pResp>5){
            printf("\nIngrese su respuesta");
            scanf("%d",pResp);
        }


}





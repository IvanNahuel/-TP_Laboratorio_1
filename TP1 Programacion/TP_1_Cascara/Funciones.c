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

float HacerTodasLasOperaciones(float numero1, float numero2){
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

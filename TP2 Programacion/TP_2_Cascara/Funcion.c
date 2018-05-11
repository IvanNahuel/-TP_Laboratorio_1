#define TAM 20

void altaPersonas(EPersona vec[],int tam){
    EPersona NuevaPersona;
    int indice;
    int buscar;
    int dni;

    indice = ObtenerEspacioLibre(vec, tam);

    if (indice == -1){
        printf("El sistema esta lleno, no se puede ingresar mas personas \n");
    } else {

        printf("ingrese dni de la persona que quiere registrar: ");
        scanf("%d",&dni);
    }
    buscar =BuscarPorDni(vec,dni,TAM);

    if (buscar ==-1) {
        NuevaPersona.estado = 0;
        NuevaPersona.dni = dni;

        printf("\n-Ingrese nombre: ");
        fflush(stdin);
        gets(NuevaPersona.nombre);

        printf("\n-Ingrese Edad: ");
        scanf ("%d",&NuevaPersona.edad);

        while (NuevaPersona.edad <=0 || NuevaPersona.edad >100){
            printf("Error Ingrese una edad Correcta: ");
            scanf ("%d",&NuevaPersona.edad);
        }

        vec[indice] = NuevaPersona;

        printf("\n-Alta de personas Exitosa\n");
        printf("--------------------------------------------------------------------------------------------------");
    }
}

void inicializarPersonar(EPersona vec[],int tam){

for (int i=0 ; i<tam; i++){
        vec[i].estado = 1;      //el estado 1 representa el campo vacio
    }
}

int ObtenerEspacioLibre(EPersona lista[], int tam){
    int indice = -1;            //valor por defecto si no ha encontrado un indice
    for (int i=0; i<tam;i++){
        if (lista[i].estado==1){
            indice = i;
            break;
        }
    }
return indice;
}



int BuscarPorDni(EPersona lista[], int dni, int tam){
    int indice = -1;
    for (int i=0; i<tam;i++){
        if (lista[i].dni==dni &&lista[i].estado==0){
            indice =i;                  //retornamos el indice donde hay coincidencias De DNI
            printf("Ya existe una persona con ese DNI, Su nombre es: %s",lista[i].nombre);
            break;
        }
    }
    return indice;
}

void BajarPersona (EPersona vec[],int tam,int dni){
    int respuesta;
        for(int i =0;i<tam;i++){
            if (!(vec[i].estado==0 && vec[i].dni ==dni)){
                printf("\nNo existe ninguna persona con ese dni \n");
                break;
            } else {
                printf("Desea eliminar a: %s ?\n",vec[i].nombre);
                printf("1-Si \n");
                printf("2-No \n");
                scanf("%d",&respuesta);
            }
            while (respuesta!=1 && respuesta!=2){
                printf("Error Reingrese respuesta \n");
                printf("Desea eliminar a: %s ?\n",vec[i].nombre);
                printf("1-Si \n");
                printf("2-No \n");
                scanf("%d",&respuesta);
            }
            switch (respuesta){
        case 1:
            vec[i].estado=1;
            break;
        case 2:
            printf("Se ha cancelado la baja de la persona: %s \n",vec[i].nombre);
            break;
            }
            break;
        }
}



void ImprimirPersonas (EPersona vec[],int tam){
EPersona Aux;

       for (int i=0; i<tam-1; i++){
            for (int j=i+1; j<tam; j++){
                if (strcmp(vec[i].nombre,vec[j].nombre)>0){

                    Aux = vec[i];
                    vec [i] = vec[j];
                    vec [j] = Aux;
                }
            }
        }

            printf("\n|              Nombre                      |      Edad   |   DNI      | \n");

        for (int i =0; i<tam; i++){
            if (vec[i].estado==0){
                printf("|%25s                 |      %2d     |   %8d |\n",vec[i].nombre, vec[i].edad, vec[i].dni);
            }
        }
                printf("----------------------------------------------------------------------------");
}


void GraficoEdades(EPersona vec[],int tam) {
    int menorA18 =0;
    int entre19Y35 =0;
    int mayorA35 =0;
    char asterisco = '*';

    int flagMe;
    int FlagEntre;
    int FlagMayo;


printf("\n------------------------------------Grafico de edades---------------------------------------------------------\n\n\n\n\n\n");
    for (int i=0;i<tam; i++){
        if (vec[i].edad<=18 && vec[i].estado ==0){
            menorA18++;
        }else if (vec[i].edad >18 && vec[i].edad <=35 && vec[i].estado ==0){
            entre19Y35++;
        } else if (vec[i].edad >35 && vec[i].estado ==0) {
            mayorA35++;
        }
    }
    for (int i=0;i<tam;i++){
        if (vec[i].estado==0){

                flagMe =0;
                FlagMayo =0;
                FlagEntre =0;   //DETERMINA SI SE HA DESCONTADO O NO (AL CONT DE MAYORRES ENTRE Y MENORES), VALORES DE SI MISMO

            if (menorA18>0){
                printf("%5c",asterisco);
            }
            if (entre19Y35>0){          //Si ESO es MAYOR a Cero
                    printf("\t     %1c",asterisco);

                    menorA18--;
                    flagMe = 1;

                    entre19Y35--;
                    FlagEntre =1;
            }
            if (mayorA35>0){

                if (FlagEntre ==0&&flagMe==0){          //si no hay nada delante
                  printf("\t\t     %5c",asterisco);

                } else {                                //si hay algo adelante
                  printf("\t     %5c",asterisco);
                }
                mayorA35--;
            }

            if (FlagEntre == 0){
                entre19Y35--;
                }
            if (flagMe == 0){
                menorA18 --;
                }
            printf("\n");
        }
    }
        printf(" <18       >19<35        >35");
}


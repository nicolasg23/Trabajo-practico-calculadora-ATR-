#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//FUNCIONES
//
void suma(int num1 , int num2){

int resultado = 0;

resultado = num1+num2;

printf("La suma de X y Y es: %d",resultado);Beep(500,200);
printf("\n \n");

    }
//
void resta(int num1 , int num2){

int resultado = 0;

resultado = num1-num2;

printf("La resta de X y Y es: %d",resultado);Beep(500,200);
    printf("\n \n");
    }
//
void division(float num1 , float num2){



float resultado = 0;

resultado = num1/num2;

           if(num2==0){
                printf("La division de X y Y no se puede realizar...");
               printf("\n \n");
            }
            else{

                printf("La division de X y Y es: %.1f",resultado);Beep(500,200);
              printf("\n \n");
            }
    }

//

void multiplicacion(int num1 , int num2){

int resultado = 0;

resultado = num1*num2;

printf("La multiplicacion de X y Y es: %d",resultado);Beep(500,200);
printf("\n \n");
    }
//
void factorial(int num1){
    int resultado= 1;

    for(int i=1; i<=num1; i++){

resultado = resultado*i ;

}
if(resultado!= 1){
printf("El factorial de X es: %d",resultado);Beep(500,200);
printf("\n \n");
}
else{
    printf("El factorial de X es: 0");Beep(500,200);
printf("\n \n");
}
}
//
int validar_numero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)// strlen; sirve para contan la cantidad de letras
    {
        if(!(isdigit(numero[i])))//isdigit; se activa cuando cuando se ingresan numeros
        {
            system("cls");
            printf("Ingresa solo NUMEROS ENTEROS!!\n");;Beep(300,100);Beep(200,800);

            return 0;
        }
    }
    return 1;
}

#endif // FUNCIONES_H_INCLUDED

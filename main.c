#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"

#define RED        "\x1b[31m"
#define GREEN      "\x1b[32m"
#define YELLOW     "\x1b[33m"
#define BLUE       "\x1b[34m"
#define MAGENTA    "\x1b[35m"
#define CYAN       "\x1b[36m"
#define RESET      "\x1b[0m"


int main()
{

    int opcion=0;
char opcionNumero[5];
char numero[5];
int f;
float numerovalido;


   int a=0,b=0;
   system("cls");

   printf(YELLOW"========================================================================\n");
   printf(YELLOW"              ");printf(RED"AA");printf(BLUE"           TTTTTTTTTTTTT        ");printf(GREEN"RRRRRRRR");printf(RED"                \n");
   printf(YELLOW"             ");printf(RED"A  A");printf(BLUE"                T              ");printf(GREEN"R       R");printf(RED"               \n");
   printf(YELLOW"            ");printf(RED"A    A");printf(BLUE"               T              ");printf(GREEN"R       R");printf(RED"               \n");
   printf(YELLOW"           ");printf(RED"A      A");printf(BLUE"              T              ");printf(GREEN"RRRRRRRR");printf(RED"                \n");
   printf(YELLOW"          ");printf(RED"AAAAAAAAAA");printf(BLUE"             T              ");printf(GREEN"R     R");printf(RED"                 \n");
   printf(YELLOW"         ");printf(RED"A          A");printf(BLUE"            T              ");printf(GREEN"R      R");printf(RED"                \n");
   printf(YELLOW"        ");printf(RED"A            A");printf(BLUE"           T              ");printf(GREEN"R       R");printf(RED"     TEAM      \n");
   printf(YELLOW"========================================================================\n");




  // getch();
   printf(YELLOW"Integrantes: \n");
   Sleep(500);
  // getch();
   printf(RED"            Nicolas Guillen\n");Beep(1100,200);
  // getch();
   printf(BLUE"            Luis Alegre\n");Beep(800,200);
  // getch();
   printf(MAGENTA"            Romina Jaime\n");Beep(1200,200);
   //getch();
   printf(CYAN"            Leandro Carballo\n");Beep(400,200);
  // getch();
   printf(GREEN"            Gabriel Toro");Beep(300,200);
  // getch();
   printf(YELLOW".\n");
   getch();

do{
        system("cls");
        printf(GREEN"MENU DE OPCIONES ");
        printf("X:%d",a);
        printf(" Y:%d",b);
        printf("\n");

        printf("1- Ingresar 1er operando\n");//(A=x)
        printf("2- Ingresar 2do operando\n");// (B=y)
        printf("3- Calcular la suma\n");//  (A+B)
        printf("4- Calcular la resta\n");// (A-B)
        printf("5- Calcular la multiplicacion\n"); // (A/B)
        printf("6- Calcular la division\n");// (A*B)
        printf("7- Calcular el factorial\n"); //(A!)
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        printf("ingrese la opcion: ");
        //scanf("%d",&opcion);
        scanf("%s",&opcionNumero);Beep(500,200);
         f =validar_numero(opcionNumero);

           if (f == 0){

           }
           else{

           numerovalido=atoi(opcionNumero);//atoi; convierte los numeros de cadenas en numeros enteros
          opcion = numerovalido;
           }
          // getch();
//
        switch(opcion){
            case 1:

            system("cls");
            printf("ingrese valor de X: ");
           // scanf("%f",&a);
            scanf("%s",numero);Beep(500,200);

            f =validar_numero(numero);

           if (f == 0){

           // printf("no numero");

           }
           else{
           //printf("numero");
           numerovalido=atoi(numero);
          a = numerovalido;
           }

           //getch();
            break;

            case 2:
            system("cls");
            printf("ingrese valor de Y: ");
             scanf("%s",numero);Beep(500,200);

             f =validar_numero(numero);

             if (f == 0){

             // printf("no numero");
             }
             else{
             //printf("numero");
             numerovalido=atoi(numero);
             b = numerovalido;
             }

           // getch();
            break;

            case 3:
            system("cls");
            suma(a,b);
            getch();

            break;

            case 4:
            system("cls");
            resta(a,b);
            getch();
            break;

            case 5:
            system("cls");
            multiplicacion(a,b);
            getch();
            break;

            case 6:
            system("cls");

            division(a,b);

            getch();
            break;

            case 7:
            system("cls");
            factorial(a);
            getch();
            break;

            case 8:
            system("cls");
            suma(a,b);
            resta(a,b);
            multiplicacion(a,b);
            division(a,b);
            factorial(a);
            getch();
            break;

            case 9:
            break;

            default:
            system("cls");
            printf("El valor ingresado es incorrecto..\n");Beep(300,100);Beep(200,800);
            getch();
            break;


         }
        }

       while(opcion!=9);

    return 0;
}

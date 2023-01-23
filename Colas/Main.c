#include<stdio.h>
#include<stdlib.h>
#include "Cola.h"
int main(){
    int menu;
    while (menu!=0){
        printf("----Menu cola------\n");
        printf("1-Insertar  2-Borrar\n");
        printf("3-Modificar 4-Buscar\n");
        printf("5-Mostrar 6-Ordenar \n");
        printf(" 0-Salir\n");
        printf("--------------------\n");
        printf("Que quieres hacer? ");
        scanf("%d",&menu);
        switch (menu)
        {
        case 0:
            printf("Salir");
            break;
            case 1:
            printf("-----Insertar------\n");
            Add(); 
            break;
            case 2:
            printf("------Borrar-------\n");
            Borrar();
            break;
            case 3:
            printf("------Modificar----\n");
            Modificar();
            break;
            case 4:
            printf("------Buscar-------\n");
            Serch();
            break;
            case 5:
            printf("------Mostrar------\n");
            Print();
            break;
            case 6:
            printf("\n------Ordenar------\n");
            int sub;
            while (sub!=0){
                printf("\nCola1 O Cola2\n");
                scanf("%d",&sub);
                switch (sub){
            case 0:
            printf("Salir");
            break;
            case 1:
            printf("\nCola 1\n");
            Par();
            printf("\n-------------\n");
            OrdenarPar();
            break;
            case 2:
            printf("\nCola 2\n");
            Impar();
            printf("\n--------------\n");
            OrdenarImpar();
            break;
            }
            }
            break;
        }
    }  
    return 0;
}
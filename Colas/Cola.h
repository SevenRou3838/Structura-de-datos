#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Por el momento solo funciona con valores numericos ya
al intrducir caracteres se rompe la direccion de 
la memoria al apuntar a los siguietes pero las
 funciones pedidas ya funcioanan*/
typedef struct nodo{
    char *producto;
    int dato;
    struct nodo* siguiente;
}nodo;
nodo* primero=NULL;
nodo* ultimo=NULL;
void Add(){
    nodo* new=(nodo*)malloc(sizeof(nodo));
    printf("Ingrea el valor del dato:  ");
    scanf("%d",&new->dato);
    if (primero==NULL){
        primero=new;
        primero->siguiente=NULL;
        ultimo=new;   
    }else{
        ultimo ->siguiente=new;
        new->siguiente=NULL;
        ultimo=new;
    }
}
void Serch(){
       nodo* actual=(nodo*)malloc(sizeof(nodo));
       actual=primero;
       int BuscarNodo=0,NodoEncontrado=0;
       printf("\nIngrasa el nodo que buscamos");
       scanf("%d",&BuscarNodo);
       if (primero!=NULL){
        while (actual!=NULL&&NodoEncontrado!=1){
            if (actual->dato==BuscarNodo)
            {
                printf("/n Nodo con el valor(%d)encontrado: ",BuscarNodo);
                NodoEncontrado=1;
            }
            actual=actual->siguiente;
        }if (NodoEncontrado==0){
            printf("\nEl nodo no a sido encontrado\n");
        }   
    }else{
        printf("\nLa cola no existe");
    }
}
void Modificar(){
       nodo* actual=(nodo*)malloc(sizeof(nodo));
       actual=primero;
       int BuscarNodo=0,NodoEncontrado=0;
       printf("\nIngrasa el nodo que modificar: ");
       scanf("%d",&BuscarNodo);
       if (primero!=NULL){
        while (actual!=NULL&&NodoEncontrado!=1){
            if (actual->dato==BuscarNodo)
            {
                printf("/n Nodo con el valor(%d)encontrado: ",BuscarNodo);
                printf("\n ingresa el nuevo valor del nodo: \n");
                scanf("%d",&actual->dato);
                printf("Nodo modificado");
                NodoEncontrado=1;
            }
            actual=actual->siguiente;
        }if (NodoEncontrado==0){
            printf("\nEl nodo no a sido encontrado\n");
        }   
    }else{
        printf("\nLa cola no existe");
    }
}
void Borrar(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
       actual=primero;
       nodo* anterior=(nodo*)malloc(sizeof(nodo));
       anterior=NULL;
       int BuscarNodo=0,NodoEncontrado=0;
       printf("\nIngrasa el nodo que borararemos");
       scanf("%d",&BuscarNodo);
       if (primero!=NULL){
        while (actual!=NULL && NodoEncontrado!=1){
            if (actual->dato==BuscarNodo){
                if (actual==primero){
                    primero=primero->siguiente;
                }else if(actual==ultimo){
                    anterior->siguiente=NULL;
                    ultimo=anterior;

                }else{
                    anterior->siguiente=actual->siguiente;
                }
                NodoEncontrado=1;
            }
            anterior=actual;
            actual=actual->siguiente;
        }if (NodoEncontrado==0){
            printf("\nEl nodo no a sido encontrado\n");
        }   
    }else{
        printf("\nLa cola no existe");
    }

}
void Print(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (primero!=NULL){
        while (actual!=NULL){
            printf("\n %d \n",actual->dato);
            actual=actual->siguiente;
        }
    }else{
        printf("\nLa cola no existe");
    }
}
void Impar(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (actual!=NULL){
        while (actual!=NULL){
            int a=actual->dato%2;
            if (a==0)
            {
            printf(" ");
            actual=actual->siguiente;
            }else
            {
            printf("\n %d impar",actual->dato);
            actual=actual->siguiente;
            }
        }
    }
}
void Par(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (actual!=NULL){
        while (actual!=NULL){
            int a=actual->dato%2;
            if (a==0)
            {
            printf("\n %d Par ",actual->dato);
            actual=actual->siguiente;
            }else
            {
            printf(" ");
            actual=actual->siguiente;
            }
        }
    }
}
void Ordenar(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (actual!=NULL){
        while (actual!=NULL){
            nodo* aux=actual->siguiente;
            while (aux!=NULL){
                if (actual->dato > aux->dato){
                    int aux2=aux->dato;
                    aux->dato=actual->dato;
                    actual->dato=aux2;
                }
                aux=aux->siguiente;
            }
            printf("%d",actual->dato);
            actual=actual->siguiente;
        }
    }
}
void OrdenarPar(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (actual!=NULL){
        while (actual!=NULL){
            int a=actual->dato%2;
            if (a==0)
            {
                nodo* aux=actual->siguiente;
            while (aux!=NULL){
                if (actual->dato > aux->dato){
                    int aux2=aux->dato;
                    aux->dato=actual->dato;
                    actual->dato=aux2;
                }
                aux=aux->siguiente;
            }
            printf("\n %d Par ",actual->dato);
            actual=actual->siguiente;
            }else
            {
            printf(" ");
            actual=actual->siguiente;
            }
        }
    }
}
void OrdenarImpar(){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=primero;
    if (actual!=NULL){
        while (actual!=NULL){
            int a=actual->dato%2;
            if (a==0)
            {
            printf(" ");
            actual=actual->siguiente;
            }else{
            nodo* aux=actual->siguiente;
            while (aux!=NULL){
                if (actual->dato > aux->dato){
                    int aux2=aux->dato;
                    aux->dato=actual->dato;
                    actual->dato=aux2;
                }
                aux=aux->siguiente;
            }
            printf("\n %d impar\n",actual->dato);
            actual=actual->siguiente;
            }
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define true 1;
#define false 0;
typedef struct nodo{
    char name;
    int dato;
    struct nodo *sig;
}nodo;

//Primero declaramos el inicio y el final de la cola
//struct nodo *inicio=NULL;
//struct nodo *final=NULL;
nodo cola(nodo *List){
    struct nodo *inicio=NULL;
    List=inicio;
    struct nodo *final=NULL;
    List=final;
}
nodo *Add(nodo *List,int n,char *string){
   nodo* newNodo=(nodo*)malloc(sizeof(nodo));
   newNodo->dato=n;
   newNodo->name=string;
   newNodo->sig=NULL;
   if (List==NULL){
    List=newNodo;
    List->sig=NULL;
    List=newNodo;
   }else{
    List->sig=newNodo;
    newNodo->sig=NULL;
    List=newNodo;
   }
   return List;
}
void Print(nodo *List){
    nodo* actual=(nodo*)malloc(sizeof(nodo));
    actual=List;
    if (actual!=NULL){
        while (actual!=NULL){
            printf("\n Id: %d   producto: %s \n",actual->dato,actual->name);
            actual=actual->sig;
        }
    }else{
        printf("\n La cola no exuste\n");
    }
}
int main(){
    nodo *List=(List);
    List=Add(List,2,"Hola");
    Print(List);
    return 0;
}
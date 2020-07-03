/*
 ============================================================================
 Name        : Tarea 02_ListaSimple.c
 Author      : Tirado Julca, Juan Jose
 Version     : Final
 Copyright   : Your copyright notice
 Description : Implementar la ED Lista Simple usando Vectores con sus funciones.
 ============================================================================
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20

struct
{
    int lista[MAX];
    int elemento;
    int pos;
    int length;
}l;
enum boolean
{
    true, false
};
typedef enum boolean boolean;

int opciones(void);
void crear(void);
void insertar(int, int);
void borrar(int);
void buscar(int);
void mostrar(void);
void mostrarPyU(void);
boolean listllena(void);
boolean listvacia(void);

void main(){
    int op;
    int elemento;
    int pos;
    l.length = 0;
    while(1)
    {
        op = opciones();
        switch (op)
        {
             case 1:   l.length = 0;
             crear();
             break;
             case 2:
             if (listllena() != true)
             {
                  printf("Ingrese un nuevo elemento ");
                  scanf("%d", &elemento);
                  printf("Ingrese la posicion : ");
                  scanf("%d", &pos);
                  insertar(elemento, pos);
             }
             else
             {
                  printf("La lista está llena... no se puede insertar el elemento");
                  printf("\n Pulsar cualquier tecla para continuar");
                  getch();
             }
             break;



             case 3:
             if (listllena() != true)
             {
                  printf("Ingrese el elemento final ");
                  scanf("%d", &elemento);
                    pos=l.length+1;
                  insertar(elemento, pos);
                  printf("Insertando elemento al final.... ");
             }
             else
             {
                  printf("La lista está llena... no se puede insertar el elemento");
                  printf("\n Pulsar cualquier tecla para continuar");
                  getch();
             }
             break;


             case 4:
             if (listvacia() != true)
             {
                  printf("Ingrese la posicion del elemento que deseas eliminar: " );


                  scanf("%d", &pos);
                  borrar(pos);
             }
             else
             {
                  printf("La lista se encuentra vacia");
                  printf("\n Pulsar cualquier tecla para continuar");
                  getch();
             }
             break;



               case 5:
              if (listvacia() != true)
             {
                  printf("\nRemoviendo la primera posicion....... \n" );

                  pos=1;
                  borrar(pos);
                    printf("\n\n");
             }
             else
             {
                  printf("La lista se encuentra vacia");
                  printf("\n Pulsar cualquier tecla para continuar");
                  getch();
             }


                if (listvacia() != true)
             {
                  printf("\nEliminando la ultima posicion....... \n" );

                  pos=l.length;
                  borrar(pos);
                    printf("\n\n");

             }
             else
             {
                  printf("La lista se encuentra vacia");
                  printf("\n Pulsar cualquier tecla para continuar");
                  getch();
             }
              printf("\n\n");

              break;

             case 6:
             printf("Nro de elementos en la lista es %d", l.length);
             printf("\n Pulsar cualquier tecla para continuar");
             getch();
             break;
             case 7:
             printf("Ingrese el elemento del cual desea buscar su posiscion: ");
             scanf("%d", &elemento);
             buscar(elemento);
             break;
             case 8:
             mostrar();
             break;
             case 9:
             mostrarPyU();
             break;
             case 10:
             printf("Salir");
             exit(0);
             break;
             default:  printf("Eleccion no valida");
             printf("\n Pulsar cualquier tecla para continuar");
             getch();
        }
    }
}
int opciones()
{
    int op;
   printf("\n\n");
    printf("OPCIONES:  ");
      printf("\n\n");
    printf("1. Crear Lista \n2. Insertar un elemento en una posicion \n3. Insertar un elemento al final de la lista\n4. Eliminar el elemento de una posicion \n5. Remover la primera y la ultima posicion \n6. Numero de elementos de la lista \n7. Buscar la posicion de un elemento de la lista \n8. Mostrar lista\n9. Mostrar el primer y el ultimo elemento\n10. Salir\n\n Presione una de las opciones : ");
    scanf("%d", &op);
    printf("\n\n");
    return op;
}
void crear(void)
{
    int elemento;
    int flag=1;
    while(flag==1)
    {
        printf("Introduzca un elemento ");
         printf("\n\n");
        scanf("%d", &elemento);
        l.lista[l.length] = elemento;
        l.length++;
        printf("- Para insertar otro elemento presionar '1' ");
         printf("\n\n");
        printf("- Si desea regresar a las opciones presione cualquier otro numero:  ");
          printf("\n\n");

        scanf("%d", &flag);
    }
}
void mostrar(void)
{
    int i;
    for (i=0; i<l.length; i++)
        printf("Elemento %d : %d \n", i+1, l.lista[i]);
    printf("Pulsar cualquier tecla para continuar...");
    getch();
}

void mostrarPyU(void)
{
    int i;
         i=0;
        printf("Elemento %d : %d \n", i+1, l.lista[i]);
        printf("\n\n");
         i=l.length-1;
        printf("Elemento %d : %d \n", i+1, l.lista[i]);
          printf("\n\n");
    printf("Pulsar cualquier tecla para continuar...");
    getch();
}


void insertar(int elemento, int pos)
{
    int i;
    if (pos == 0)
    {
        printf("\nNo se puede insertar un elemento en la posición 0");
        getch();
        return;
    }

    if (pos-1 > l.length)
    {
        printf("\nSolo hay %d elementos. No se pueden insertar en la %d posicion", l.length, pos);
        printf("\n Pulsar cualquier tecla para continuar...");
        getch();
    }
    else
    {
        for (i=l.length; i>=pos-1; i--)
        {
            l.lista[i+1] = l.lista[i];
        }
        l.lista[pos-1] = elemento;
        l.length++;
    }
}
void borrar(int pos)
{
    int i;
    if(pos == 0)
    {
        printf("\nNo se puede eliminar en la posición 0 de un elemento");
        getch();
        return;
    }
    if (pos > l.length)
    {
        printf("\n\n Solo hay %d elementos. No se puede borrar", l.length, pos);
        printf("\n Pulsar cualquier tecla para continuar...");
        getch();
        return;
    }
    for (i=pos-1; i<l.length; i++)
    {
        l.lista[i] = l.lista[i+1];
    }
    l.length--;
}

void buscar(int elemento)
{
    int i;
    int flag = 1;

    for (i=0; i<l.length; i++)
    {
        if(l.lista[i] == elemento)
        {
            printf ("%d Se encuentra en la posicion %d  ",elemento, i+1);
            flag = 0;
            printf("\n Pulsar cualquier tecla para continuar...");
            getch();
            break;
        }
    }
    if(flag == 1)
    {
        printf("Elemento no encontrado.\n Pulsar cualquier tecla para continuar...");
        getch();
    }
}
boolean listllena(void)
{
    if (l.length == MAX)
        return true;
    else
        return false;
}
boolean listvacia(void)
{
    if (l.length == 0)
        return true;
    else
        return false;
}

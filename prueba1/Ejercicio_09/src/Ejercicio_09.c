/*
 ============================================================================
 Name        : Ejercicio_09.c
 Author      : Tirado Julca, JuanJose
 Version     : Final
 Copyright   : Your copyright notice
 Description : Escriba un programa que calcule el producto de elementos que se alamcenan en la diagona principal
 ============================================================================
 */

#include <stdlib.h>
#define Filmax 150
#define Colmax 150
void ingresarM (int Matriz[150][150], int *dF, int *dC);
void mostrarM (int Matriz[150][150], int d);
void producto (int Matriz[150][150], int d);

int main()
{
	int fil, col, Matriz[150][150];
	ingresarM(Matriz, &fil, &col);
	mostrarM(Matriz, fil);
	producto(Matriz, fil);
	system("pause");

	return (0) ;
}

void ingresarM(int Matriz[150][150], int *dF, int *dC){
	int i, j, nd;
	printf("Ingresar la dimension de la matriz cuadrada: \n");
	scanf("%d", &nd);
	printf("\n");
		for(i=0; i<nd; i++){
			for(j=0;j<nd;j++){
				printf(" Ingrese los datos de: \n");
				printf(" Matriz [%d][%d]= ", i, j);
				scanf("%d",&Matriz[i][j]);
			}
		}
		*dF= nd;
		*dC= nd;
}

void mostrarM(int Matriz[150][150], int d){
	int i,j;
            printf("\n");
			printf("La matriz es: \n");
		for(i=0; i<d; i++){
			for(j=0;j<d; j++){
				printf("%d", Matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}



void producto(int Matriz[150][150], int d){
	int i,j;
	int prod=1;
		for(i=0; i<d; i++){
			for(j=0;j<d; j++){
				if(i==j){
					prod=prod*Matriz[i][j];
				}
			}
			printf("\n");
		}
		printf("Producto de los elementos en la Matriz principal = %d \n", prod);
	}

/*
 ============================================================================
 Name        : Ejercicio_06.c
 Author      : Tirado Julca, Juan Jose
 Version     : Final
 Copyright   : Your copyright notice
 Description : Escribe un programa para leer y mostrar un cuadrado (usando funciones)
 ============================================================================
 */


#include <stdio.h>


int main() {
	int n;
int fila, columna;
printf("Introduzca el lado del cuadrado:");
scanf("%i", &n);
cuadrado(n);
		return 0;
		   }


int cuadrado(int n){
	int fila, columna;
for(fila=1;fila<=n;fila++){
	for(columna=1;columna<=n;columna++)
		printf("*");
		printf("\n");

		 }
		system("pause");
	    return 0;
		   }

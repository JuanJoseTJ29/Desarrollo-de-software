/*
 ============================================================================
 Name        : Ejercicio_08.c
 Author      : Tirado Julca, Juan Jose
 Version     :Final
 Copyright   : Your copyright notice
 Description : Escriba un programa para agregar dos matrices 3 x 3 usando punteros.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int **m1,**m2,i,j,filas,columnas;

filas=3;
columnas=3 ;
m1= (int**)calloc(filas,sizeof(int*));
for(i=0; i<filas;i++)
m1[i]=(int*)calloc(columnas,sizeof(int));

m2= (int**)calloc(filas,sizeof(int*));
for(i=0; i<filas;i++)
m2[i]=(int*)calloc(columnas,sizeof(int));


printf("Introduce los numeros de la primera matriz: \n");

for(i=0; i<filas;++i){
			for(j=0; j<columnas;j++){
				scanf("%i",& m1[i][j]);

	}

	}

	printf("Introduce los numeros de la segunda matriz: \n");
	for(i=0; i<filas;++i){
			for(j=0; j<columnas;j++){
				scanf("%i",& m2[i][j]);

	}

	}


		printf("la primera matriz: \n");


		for(i=0; i<filas;i++){
			for(j=0; j<columnas;j++){
				printf("%d", m1[i][j]);
					}

	printf("\n");
	}

	printf("\n");

		printf("la segunda matriz: \n");


		for(i=0; i<filas;i++){
			for(j=0; j<columnas;j++){
				printf("%d", m2[i][j]);
					}

	printf("\n");
	}

//para liberar memoria
	for(i=0; i<filas;i++)
		free(m1[i]);
		free(m1);
return 0;
	}

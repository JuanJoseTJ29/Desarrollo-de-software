/*
 ============================================================================
 Name        : Ejercicio_02.c
 Author      : Tirado Julca Juan Jose
 Version     : Final
 Copyright   : Your copyright notice
 Description : Escribe un programa que lea una matriz de 100 enteros Mostrar todos los pares de elementos cuyos suma es 50.
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>
void introduce (int matriz[10][10]);
void leer (int matriz[10][10]);
void sumar (int matriz[10][10]);

int main() {

	int matriz[10][10];
	introduce(matriz);
	leer(matriz);
	sumar(matriz);
	system("pause");
	return 0;
}

 void introduce (int matriz[10][10]){
	int i, j ;

	srand(time(NULL));

	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			matriz[i][j]= rand()%70;
		}
	}

}

 void leer (int matriz[10][10]){
	 int i,j;
	 for (i=0; i<10; i++){
	 		for (j=0; j<10; j++){
	 			printf("%i ",matriz[i][j]);
	 		}
	 		printf("\n");
  }
  }

  void sumar (int matriz[10][10]){
	 int i,j,f,t;
	 int suma=0;
	 for (i=0; i<10; i++){
	 		for (j=0; j<10; j++){
	 			for(f=0; f<10; f++){
	 			  for(j=0; j<10;j++){

	 			  	if(i!=f||j!=t){

	 			  	suma=matriz[i][j]+matriz[f][t];

	 			  	if(suma==50){
							printf("Los grupos son : ");
							printf("matriz[%d][%d] --- matriz[%d][%d] \n\n",i+1,j+1,f+1,t+1);
							matriz[i][j]=0;
							matriz[f][t]=0;
	 			  		}

	 			  		}
	 			  		}
	 			  		}
	 			  		}
	 			  			}
	 			  			printf("\n");

	 			  			}

/*
 ============================================================================
 Name        : Ejercicio_21.c
 Author      : Tirado Julca, Juan Jose
 Version     : Final
 Copyright   : Your copyright notice
 Description : Escriba un programa para calcular XA + XB donde A y B son matrices y x=2 e y=3
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Filmax 150
#define Colmax 150
void dimesionMatriz(int *dF, int *dC);
bool verificarId(int dFa, int dCa, int dFb, int dCb);
void leerMatriz (int x[150][150], int dF, int dC);
void leerMatriz2(int x[150][150], int dF, int dC);
void muestra (int x[150][150], int dF, int dC);
void operar(int x[150][150], int y[150][150],int dFa, int dCa, int p, int q);


int main()
{
	int f1, c1, A[150][150];
	int f2, c2, B[150][150];
	int x=2;
	int y=3;
	bool verificar;
	dimesionMatriz(&f1, &c1);
	dimesionMatriz(&f2, &c2);
	verificar=verificarId(f1,c1,f2,c2);
	if(verificar==true){
		leerMatriz(A, f1, c1);
		leerMatriz2(B, f2, c2);
		muestra(A, f1, c1);
		muestra(B, f2, c2);
		operar(A, B, f1, c1, x, y);
	}
	printf("\n");
	system("pause");

	return (0) ;
}

void dimesionMatriz (int *dF, int *dC){
	int fl,cl;
	printf("Numero de Filas:");
	scanf("%d", &fl);
	printf("Numero de Columnas:");
	scanf("%d", &cl);
	printf("\n");
	if(fl<150&&cl<150){
		*dF= fl;
		*dC= cl;
	}
	else{
		system("pause");
		exit(1);
	}
}


bool verificarId(int dFa, int dCa, int dFb, int dCb){
	bool matIguales;
	if(dFa==dFb&&dCa==dCb){
		matIguales=true;
		printf("Dimensiones iguales por lo tanto se puede sumar \n");
	}
	else{
		matIguales=false;
		printf("Dimensiones diferentes por lo tanto no se puede sumar\n");
	}
	return matIguales;
}


void leerMatriz (int x[150][150], int dF, int dC){
	int i, j ;

	srand(time(NULL));

	for (i=0; i<dF; i++){
		for (j=0; j<dC; j++){
			x[i][j]= rand()%70;


		}
	}
}


void leerMatriz2 (int x[150][150], int dF, int dC){
	int i, j ;

	srand(time(NULL));

	for (i=0; i<dF; i++){
		for (j=0; j<dC; j++){
			x[i][j]= rand()%60;



		}
	}
}



void muestra (int x[150][150], int dF, int dC){

int i,j;
	 for (i=0; i<dF; i++){
	 		for (j=0; j<dC; j++){
	 			printf("%d ",x[i][j]);
	 		}
	 		printf("\n");
  }

  	printf("\n");
  }





void operar(int x[150][150], int y[150][150],int dFa, int dCa, int p, int q){
	int i,j;
	int t[150][150];
	for(i=0; i<dFa; i++){
		for(j=0;j<dCa; j++){
			t[i][j]=p*x[i][j]+q*y[i][j];
		}
		printf("\n");
	}
	muestra(t, dFa, dCa);
}

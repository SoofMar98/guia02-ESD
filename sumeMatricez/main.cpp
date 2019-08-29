/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on 29 de agosto de 2019, 04:55 AM
 */

#include <cstdlib>
#include <stdio.h>
#define fila 4
#define columna 4
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    system("clear");
    
    int mA[fila][columna];
    int mB[fila][columna];
    int mC[fila][columna];
    
    int i, j, k, l,
    
    printf("A continuacion se sumaran dos matrices de %ix%i. Comience a introducir los datos: \n ", fila, columna);

	// Se ponen las matrices a cero:
	for( i=0; i<fila; i++ ){
		for( j=0; j<columna; j++ ){
			mA[i][j] = 0;
			mB[i][j] = 0;
		};	
	};


	// Se introducen los valores de la matriz Uno:
	for( i=0; i<fila; i++ ){ // La i marca las filas
	
		for( j=0; j<columna; j++ ){ // La j marca las columnas
		
			// En la fila i, columna j, se guarda el entero introducido:
			scanf("%i", &mA[i][j] );
			system("clear");
			
			// aqui se imprime la matriz completa con el valor almacenado:
			printf("Primera matriz \n");
			for( k=0; k<fila; k++ ){
			
				for( l=0; l<columna; l++ ){
					printf(" %i ", mA[k][l] );
				}	
			
				printf("\n");
			}			
		
		}	
	
	}
	system("clear");

	
	// Se introducen los valores de la matriz Dos:
	printf("Segunda matriz \n");
	for( i=0; i<fila; i++ ){
	
		for( j=0; j<columna; j++ ){
		
			// En la fila i, columna j, se guarda el entero introducido:
			scanf( "%i", &mB[i][j] );
			system("clear");
			
			// Se imprime la matriz completa con el valor almacenado:
			printf("Segunda matriz \n");
			for( k=0; k<fila; k++ ){
			
				for( l=0; l<columna; l++ ){
					printf(" %i ", mB[k][l] );
				}	
			
				printf("\n");
			}			
		
		}	
	
	}	
	system("clear");
	
	
	// Se calcula el resultado:
	for( i=0; i<fila; i++ ){
	
		for( j=0; j<columna; j++ ){
			mC[i][j] = mA[i][j] + mB[i][j];
		}	
	
	}	
	
	
	 // y se imprimen las tres matrices
	 printf("Primera matriz   +   Segunda matriz   =   Matriz resultado \n");
	for( i=0; i<fila; i++ ){
	
		printf(" ");
		for( j=0; j<columna; j++ ){
			printf(" %i ", mA[i][j] );
		};
		printf("         ");
		for( j=0; j<columna; j++ ){
			printf(" %i ", mB[i][j] );
		};
		printf("          ");
		for( j=0; j<columna; j++ ){
			printf(" %i ", mC[i][j] );
		};			
		printf("\n");
		
	};		
	
	printf("\v \v");
	
    return 0;
}


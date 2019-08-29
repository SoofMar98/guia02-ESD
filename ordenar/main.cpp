/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on 29 de agosto de 2019, 04:40 AM
 */

#include <cstdlib>
#include <stdio.h>
#define filas 2
#define columnas 2

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int matriz [filas][columnas];
    int i, j, x, y, auxiliar;
    
    //aqui se llenara el arreglo
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf("Ingrese un numero: ");
            scanf("%d", & matriz[i][j]);
        }
    }
    printf("\n");
    
     i = 0;
    j = 0;
    printf("ordeno sus filas en ascendencia\n");
    
    for( i ; i <filas; i++)
    {
        j = 0;
        for (j ; j < columnas; j++)
        {
                if(matriz1[i][j] > matriz1[i][j+1])
                {
                    auxiliar= matriz1[i][j];
                    matriz1[i][j] = matriz1[i][j+1];
                    matriz1[i][j+1] = auxiliar;
                }
            printf("  %d  ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    //aqui es donde tirada ya los numeros ordenados
    printf("Matriz ordenada  \n");
    
    printf("\n");
    for(j=0;j<columnas;j++){
        printf("\n");
        for(i=0;i<filas;i++){
            printf("%d\t", matriz[j][i]);
        }
    }
    return 0;
}


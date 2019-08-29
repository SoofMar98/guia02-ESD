/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: user
 *
 * Created on 29 de agosto de 2019, 05:24 AM
 */

#include <cstdlib>
#include <stdio.h>
const int dim=100;
int i,j,fil,col;
float MatA[dim][dim],MatB[dim][dim]; /*Tamaño maximo de 100x100*/

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
      printf("Programa que suma matrices:\n\n");
    printf("Introduzca el tamano de las matrices:\n\n Filas:"); scanf("%i", &fil);
    printf(" Columnas: "); scanf("%i", &col);
   
    /*Se piden los datos*/
    printf("\n\nIntroduca los datos de la Matriz A:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatA[i][j]);
        }
    }
   
    printf("\n\n\nIntroduca los datos de la Matriz B:\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nIntroduzca la coordenada (%i,%i): ",i,j); scanf("%f", &MatB[i][j]);
        }
    }
   
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) MatA[i][j]=MatA[i][j]+MatB[i][j]; /*Se guarda el resultado de la suma en la matriz A*/
    }
   
    printf("\n\nLa matriz resultado es:\n\n");
    for(i=1;i<=fil;i++)
    {
        for(j=1;j<=col;j++) printf("%10f",MatA[i][j]);
        printf("\n");
    }
    
    return 0;
}


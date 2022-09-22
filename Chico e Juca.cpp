//Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce  3  centímetros  por  ano.  
//Construir  um  algoritmo  que  calcule  e  imprima quantos anos serão necessários para que Juca seja maior que Chico.

#include <stdio.h>
#include <stdlib.h>

int main()
{

float juca = 1.10;
float chico = 1.50;
int ano;
ano = 0;

while (juca < chico)

{

juca = juca + 0.03;

chico = chico + 0.02;

ano = ano + 1;

}

printf("%d Anos serao necessarios para que Juca seja maior que Chico. \n\n" , ano);



}

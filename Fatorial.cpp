//Entrar  com  um  número  inteiro  positivo  e  exibir  o  fatorial  deste  número, 
//Lembrando que 0! = 1. Exemplo: 5! = 5x4x3x2x1 = 120

#include <stdio.h>
#include <stdlib.h>

int main()
{
int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial calculado: %d", fat);
return 0;
}

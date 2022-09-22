//Ler  2  valores,  calcular  e  escrever  a  soma  dos  inteiros  existentes  entre  os  2 valores  lidos  (incluindo  os  valores  lidos  na  soma).  
//Considere  que  o  segundo valor lido será sempre maior que o primeiro valor lido


#include<stdio.h>
#include<conio.h>
main()
{
      int v1,v2,x,s=0;        
      printf("Digite um numero \n");
      scanf("%i",&v1);
      printf("Digite outro numero \n");
      scanf("%i",&v2);
     if(v2>v1)
{
     for(x=v1;x<=v2;x++)
     {
         s=s+x;
     }
printf("Soma dos numeros entre %d e %d = %d",v1, v2, s);
}
 getch();
                                                   }

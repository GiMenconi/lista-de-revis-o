  //Fa�a  um  algoritmo  para  ler  o  c�digo  e  o  pre�o  de  15  produtos,  calcular  e escrever (n�o deve ser usado vetor): 
  //- o maior pre�o lido 
  //- a m�dia aritm�tica dos pre�os dos produtos 
 
 #include<stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	system("color F0");
	
    int soma, maior = 0, i, s;
    float media;
    for(i= 0; i < 15 ; i++){
    	
    	printf("Digite um valor: ");
    	scanf("%d",& s);
    	
    	if(s > maior){
    	 maior = s;
    	}
    	soma = soma + s;
	}
    
    media= soma/ 5;
    printf("O maior numero �: %d\n",maior );
    printf("A media dos valores �: %.2f\n",media );
    
    return 0;
}

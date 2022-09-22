  //Faça  um  algoritmo  para  ler  o  código  e  o  preço  de  15  produtos,  calcular  e escrever (não deve ser usado vetor): 
  //- o maior preço lido 
  //- a média aritmética dos preços dos produtos 
 
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
    printf("O maior numero é: %d\n",maior );
    printf("A media dos valores é: %.2f\n",media );
    
    return 0;
}

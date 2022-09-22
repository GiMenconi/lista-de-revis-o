#include <stdio.h>
main(){
	char opcao;
	int codigo, func=0, vip2=0, comum=0;
	float desconto,valor,pagar;
	
		printf("Comum         digite 1\n");
		printf("Funcionario   digite 2\n");
		printf("Cliente Vip   digite 3\n");
		printf("Insira o codigo do respectivo cliente: ");
		scanf("%d", &codigo);
		printf("Qual o valor da compra realizada pelo cliente? R$");
		scanf("%f", &valor);
		if (codigo==1){	
			printf("O valor a pagar eh de: R$ %.2f", valor);
		}
		else if(codigo==2){	
			desconto=valor*0.1;
			pagar=valor-desconto;
			printf("O valor a pagar eh de: R$ %.2f", pagar);
		}
		else if (codigo==3){	
	    	desconto=valor*0.05;
			pagar=valor-desconto;
			
			printf("O valor a pagar eh de: R$ %.2f", pagar);
	
}
}

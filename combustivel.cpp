#include <stdio.h>
main(){
	
	int codigo;
	float litros,valor,pagar,desconto;
	
		printf("Alcool         Digite 1\n");
		printf("Gasolina       Digite 2\n");
		printf("Insira o codigo do combustivel: ");
		scanf("%i", &codigo);
		printf("Quantos litros foram abastecidos? ");
	  	scanf("%f", &litros);
	  	
		if (codigo==1 && litros<=20){	
	    	valor=litros*2.9;
	    	desconto=valor*0.03;
        	pagar=valor-desconto;
			printf("O valor a pagar eh de: R$ %.2f", pagar);
	    	}else if (codigo==1 && litros>20){
    		valor=2.9*litros;
	    	desconto=valor*0.05;
	    	pagar=valor-desconto;
			printf("O valor a pagar eh de: R$ %.2f", pagar);   	
	    	}else if(codigo==2 && litros<=20){	
			valor=3.3*litros;
	    	desconto=valor*0.04;
   	    	pagar=valor-desconto;
	    	printf("O valor a pagar eh de: R$ %.2f", pagar);	
	    	}else {
	   		valor=3.3*litros;
	   		desconto=valor*0.06;
	    	pagar=valor-desconto;
			printf("O valor a pagar eh de: R$ %.2f", pagar);	
		}
	}
		

#include <stdio.h>

main() {
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	if (idade<5){
		printf("Idade inferior ao permitido");
	}else if (idade<8){
		printf("Nadador pertencente a categoria infantil A");
	}else if (idade<11){
		printf("Nadador pertencente a categoria infantil B");
	}else if (idade<14){
		printf("Nadador pertencente a categoria juvenil A");
	}else if (idade<17){
		printf("Nadador pertencente a categoria juvenil B");
	}else if (idade>=18){
		printf("Nadador pertencente a categoria adulto");
	}
        } 


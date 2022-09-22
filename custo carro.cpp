#include <stdio.h>

main (){
float cfabrica,distribuidor,impostos,cfinal;

    printf ("Insira o custo de fabrica do carro desejado: ");
    scanf ("%f", &cfabrica); 
    distribuidor=cfabrica*0.28;
    impostos=cfabrica*0.45;
    cfinal=cfabrica+distribuidor+impostos;
    printf ("O custo final deste modelo eh %.3f", cfinal);
    
}

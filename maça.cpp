#include <stdio.h>

main (){
int qmaca;
float atacado,varejo;

    printf ("Quantas macas o cliente levara? ");
    scanf ("%i", &qmaca); 
    if(qmaca<12){
    	atacado=qmaca*1.3;
        printf("O valor a pagar eh de: R$ %.2f ", atacado);
    }
    else{
    	varejo=qmaca*1;
    printf ("O valor a pagar eh de: R$ %.2f ", varejo);
    }
    
}

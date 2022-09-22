#include <stdio.h>

main (){
float n1,n2,media;

    printf ("Qual a primeira nota do aluno? ");
    scanf ("%f", &n1);
	 printf ("Qual a segunda nota do aluno? ");
    scanf ("%f", &n2); 
    media=(n1+n2)/2;
    
    if(media>=6){
        printf("O aluno obteve aprovação, sua media foi: %.2f.", media);
    }
    else{
        printf ("Aluno reprovado, pois obteve %.1f pontos na media. ", media);
    }
    
}

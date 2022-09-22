#include <stdio.h>
float polegada, cm;

main ()
{

    printf ("Qual a polegada que deseja converter? ");
    scanf ("%f", &polegada); 
    cm=polegada*2.54;
    printf ("A medida em centimetros eh %.3f ", cm);
    
}

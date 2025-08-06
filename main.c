#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
   int N1, N2;

    printf("MINI CALCULADORA DE INTEIROS: N1 e N2\n");
    printf("VALOR DE N1: " );
    scanf ("%i", &N1);
    printf("VALOR DE N2: ");
    scanf("%i", &N2);
   //processamento
    printf ("ADIÇÃo: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
    printf("SUBTRAÇÃo: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
    printf("MULTIPLICAÇÃo: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
    printf("DIVISÃO: N1 / N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);
      printf("QUOCIENTE (int): N1 div N2 = %i / %i = %.1f\n", N1, N2, 1.0 * N1 / N2);



    return 0;
}

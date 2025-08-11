#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI  3.14
int main()
{



    //Entrada: (sempre declara variavel e pegar os dados nescessarios)
    float R, area, volume, volumeLitros;

     printf("ESFERA: Dados de entrada\n");
     printf("Raio (R) em metros: ");
     scanf ("%f", &R );
     // PROCESSAMENTO (ULA)
     area = 4 * PI * pow(R, 2); // Metros quadrados
     volume = 1.0 * 4/3 * PI * pow (R, 3); // Metros Cubicos
     volumeLitros = 1000 * volume ; // Litros
     //Saida
     printf ("DADOS da esfera:\n");
     printf ("AREA: %.2f  METROS quadrados\n", area);
     printf ("Volume: %.2f  METROS  Cubicos\n",volume );
     printf ("Volume: %.2f    Litros\n",volumeLitros );





    return 0;






}

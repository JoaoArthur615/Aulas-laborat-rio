esqueci de fazer em diretorio diferente toma 



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI  3.14
int main()
{
    float preco, reajuste ;
    float totalbruto, totalilquido, desconto;
    int quantidade


    printf ("MERCADoRIA: DADOS de entrada\n");
    printf ("Preço(R$): ");
    scanf ("%f", &preco);
    printf ("Quantidade (Unid.): ");
    scanf ("%i", quatidade);
    printf ("Reajuste(%%): ");
    scanf ("%f", &reajuste);
    //processamento
    totalbruto = preço * quantidade;
    desconto = reajust/ 100 * totalbruto;
    totalliquido = totalbruto - desconto;
    // saida
     printf ("Total (sem desconto): R$ %.2f\n", totalbruto);
    printf ("Total (%.2f %% OFF): R$ %.2f\n", reajuste, totalliquido);
    printf ("Total (%.2f %% ): R$ %.2f\n", totalbruto);



    return 0;




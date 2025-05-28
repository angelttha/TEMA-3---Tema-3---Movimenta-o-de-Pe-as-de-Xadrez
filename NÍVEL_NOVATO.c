#include <stdio.h>

int main(){
    //Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    int i = 1;
    int j = 1;

printf("MOVIMENTAÇÃO DA TORRE...\n");
printf("\n");

    while(i <= 5){
        printf("%d Direita.\t", i);
        i++;
    }

printf("\n");
printf("\n");


    while (j <= 5){
        printf("%d Direita.\n", j);
        j++;
    }
    
    
   // Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
printf("\n");
printf("MOVIMENTAÇÃO DO BISPO...\n");
printf("\n");

       for (int i_2 = 1; i <= 5; i++) {
           printf("%d Cima, Direita.\n", i_2);
       }
      
    
   // Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda
   int i_3 = 1;

   printf("\n");
   printf("MOVIMENTAÇÃO DA RAINHA...\n");
   printf("\n");

   do
   {
    printf("%d Esquerda.\n",i_3);
    i_3++;
   } while (i_3 <= 8);
   

    return 0;
}


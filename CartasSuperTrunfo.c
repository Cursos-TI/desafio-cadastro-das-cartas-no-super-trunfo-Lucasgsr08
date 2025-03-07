#include <stdio.h>
int main () {
    //carta01 Goiás 
    
    char estado[20]= "Goias";
    char codigo [5]= "G01";
    char cidade[50]= "Goiania";
    int populacao = 1494599;
    float area = 728.8;
    float PIB = 699.28;
    int pontos_turisticos = 8;
    

    printf("Estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("area: %.2f km\n", area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);
    printf("\n");
    printf("\n");
    printf("\n");

//carta02 Minas Gerais
char estado2[20]= "Minas Gerais";
char codigo2 [5]= "M01";
char cidade2[50]= "Belo Horizonte";
int populacao2 = 6006887;
float area2 = 331.401;  
float pib2 = 41.81832;
int pontos_turisticos2 = 20;


printf("Estado: %s\n", estado2);
printf("codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("area: %.2f km\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);
return 0;
}  
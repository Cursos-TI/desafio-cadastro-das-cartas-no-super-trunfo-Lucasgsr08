#include <stdio.h>

int main() {
    int atributo1, atributo2; // Variáveis para armazenar os atributos escolhidos pelo jogador

    // Dados de Minas Gerais
    int populacao2 = 6006887;
    float area2 = 331401.0; 
    float pib2 = 105.8; // bilhões de reais
    int pontos_turisticos2 = 20;
    float densidade_demografica2 = populacao2 / area2;

    // Dados de Goiás
    int populacao = 1494599;
    float area = 72880.0; 
    float pib = 59.8; // bilhões de reais
    int pontos_turisticos = 8;
    float densidade_demografica = populacao / area;

    float valor1_GO, valor1_MG, valor2_GO, valor2_MG, soma_GO, soma_MG;

    // Exibir menu para escolher o primeiro atributo
    printf("\n==== SUPER TRUNFO - COMPARACAO  DE ESTADOS ====\n");
    printf("Escolha o PRIMEIRO atributo para comparar entre Goiás e Minas Gerais:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade Demografica (MENOR valor vence!)\n");
    printf("Digite sua opcao: ");
    scanf("%d", &atributo1);

    // Garantir que o atributo escolhido seja válido
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida! Digite um numero entre 1 e 5.\n");
        return 1;
    }

    // Exibir menu para escolher o segundo atributo (sem repetir o primeiro)
    printf("\nAgora escolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            printf("%d - ", i);
            switch (i) {
                case 1: printf("Populacao\n"); break;
                case 2: printf("Area\n"); break;
                case 3: printf("PIB\n"); break;
                case 4: printf("Numero de pontos turisticos\n"); break;
                case 5: printf("Densidade Demografica (MENOR valor vence!)\n"); break;
            }
        }
    }
    printf("Digite sua opcao: ");
    scanf("%d", &atributo2);

    // Garantir que o segundo atributo escolhido seja válido e diferente do primeiro
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opcao invalida! O segundo atributo deve ser diferente do primeiro.\n");
        return 1;
    }

    // Função para pegar valores dos atributos escolhidos
    switch (atributo1) {
        case 1: valor1_GO = populacao; valor1_MG = populacao2; break;
        case 2: valor1_GO = area; valor1_MG = area2; break;
        case 3: valor1_GO = pib; valor1_MG = pib2; break;
        case 4: valor1_GO = pontos_turisticos; valor1_MG = pontos_turisticos2; break;
        case 5: valor1_GO = densidade_demografica; valor1_MG = densidade_demografica2; break;
    }
    
    switch (atributo2) {
        case 1: valor2_GO = populacao; valor2_MG = populacao2; break;
        case 2: valor2_GO = area; valor2_MG = area2; break;
        case 3: valor2_GO = pib; valor2_MG = pib2; break;
        case 4: valor2_GO = pontos_turisticos; valor2_MG = pontos_turisticos2; break;
        case 5: valor2_GO = densidade_demografica; valor2_MG = densidade_demografica2; break;
    }

    // Exibir os atributos escolhidos
    printf("\nAtributos escolhidos:\n");
    printf("1º Atributo: ");
    switch (atributo1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Numero de pontos turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
    }
    printf("2º Atributo: ");
    switch (atributo2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Numero de pontos turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
    }

    // Comparação dos atributos individualmente
    printf("\nComparacao dos atributos:\n");
    printf("1º Atributo: %.2f vs %.2f\n", valor1_GO, valor1_MG);
    printf("2º Atributo: %.2f vs %.2f\n", valor2_GO, valor2_MG);

    int vitorias_GO = 0, vitorias_MG = 0;
    if (atributo1 == 5) {
        if (valor1_GO < valor1_MG) vitorias_GO++;
        else vitorias_MG++;
    } else {
        if (valor1_GO > valor1_MG) vitorias_GO++;
        else vitorias_MG++;
    }

    if (atributo2 == 5) {
        if (valor2_GO < valor2_MG) vitorias_GO++;
        else vitorias_MG++;
    } else {
        if (valor2_GO > valor2_MG) vitorias_GO++;
        else vitorias_MG++;
    }

    // Soma dos atributos
    soma_GO = valor1_GO + valor2_GO;
    soma_MG = valor1_MG + valor2_MG;

    printf("\nSoma dos atributos:\n");
    printf("Goiás: %.2f\n", soma_GO);
    printf("Minas Gerais: %.2f\n", soma_MG);

    // Determinar vencedor
    if (soma_GO > soma_MG) printf("\nGoiás venceu!\n");
    else if (soma_MG > soma_GO) printf("\nMinas Gerais venceu!\n");
    else printf("\nEmpate!\n");

    return 0;
}

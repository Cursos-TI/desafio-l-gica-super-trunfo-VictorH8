#include <stdio.h>

int main() {
    char estado1[30], codigo1[5], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[30], codigo2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    int atributoEscolhido;

    printf("Cadastro da Carta 1\n");
    printf("Digite o estado: ");
    fgets(estado1, sizeof(estado1), stdin);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB (em bilhões USD): ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB (em bilhões USD): ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();

    printf("\nCarta 1 - %s", cidade1);
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões USD\nPontos turísticos: %d\n",
           codigo1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\nCarta 2 - %s", cidade2);
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões USD\nPontos turísticos: %d\n",
           codigo2, populacao2, area2, pib2, pontosTuristicos2);

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributoEscolhido);
    getchar();

    if (atributoEscolhido == 1) {
        if (populacao1 > populacao2)
            printf("%s venceu!\n", cidade1);
        else if (populacao1 < populacao2)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");

    } else if (atributoEscolhido == 2) {
        if (area1 > area2)
            printf("%s venceu!\n", cidade1);
        else if (area1 < area2)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");

    } else if (atributoEscolhido == 3) {
        if (pib1 > pib2)
            printf("%s venceu!\n", cidade1);
        else if (pib1 < pib2)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");

    } else if (atributoEscolhido == 4) {
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("%s venceu!\n", cidade1);
        else if (pontosTuristicos1 < pontosTuristicos2)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");

    } else {
        printf("Atributo inválido!\n");
    }

    return 0;
}

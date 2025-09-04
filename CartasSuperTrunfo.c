#include <stdio.h>
    int main() {
    // Variáveis da carta 01
    char estado1, codigo1[4], nome1[20];
    int  pontosturisticos1;
    float area1, pib1, densidade1, pibpercapta1, superpoder1;
    unsigned long int populacao1;

        // Variáveis da carta 02
    char estado2, codigo2[4], nome2[20];
    int  pontosturisticos2;
    float area2, pib2, densidade2, pibpercapta2, superpoder2;
    unsigned long int populacao2;

        //Inserir informações da carta 01
    printf("Carta 01: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (Letra do Estado seguido de 01 a 04): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);
    
    printf("\n");
    
    //Inserir informações da carta 02
    printf("Carta 02: \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (Letra do Estado seguido de 01 a 04): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    
    printf("\n");
    
    //Operadores Matemáticos
    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    superpoder1 = (populacao1 + pontosturisticos1) + (float) (area1 + pib1 + densidade1 + pibpercapta1);
    superpoder2 = (populacao2 + pontosturisticos2) + (float) (area2 + pib2 + densidade2 + pibpercapta2);
    
    pibpercapta1 = (pib1 * 1000000000) / populacao1;
    pibpercapta2 = (pib2 * 1000000000) / populacao2;
    
    //Informações apresentadas em tela ao usuário (carta 01):
    printf("Carta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capta: %.2f\n", pibpercapta1);
    
    printf("\n");
    
    //Informações apresentadas em tela ao usuário (carta 02):
    printf("Carta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capta: %.2f\n", pibpercapta2);

    //Comparação das cartas
    printf("Comparação de cartas: \n");
    printf("População: Carta 1 venceu"
        populacao1 > populacao2 ? 1 : 2,
        populacao1 > populacao2);
    
        return 0;
    
        
    }
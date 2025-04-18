int main()
 {
    char estado1,estado2;
    char codigodacarta1 [5],codigodacarta2 [5];
    char nomedacidade1 [5],nomedacidade2 [5];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosturisticos1,pontosturisticos2;


    printf("*** Jogo Super Trunfo ***\n");
    
    //Cadastro das cartas
    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigodacarta1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &nomedacidade1);

    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);
    
    printf("Carta 1:\n ");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %c\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Carta 2:\n ");
    printf("Digite o nome do Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", &nomedacidade2);

    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d\n", &pontosturisticos2);

// Exibição dos Dados das Cartas:

    printf("Carta 2:\n ");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %c\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);




    return 0;

}

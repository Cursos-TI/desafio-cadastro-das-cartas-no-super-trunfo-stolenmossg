// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


#include <stdio.h>


    int main() {
        printf("Desafio: Super Trunfo - Cidades\n");
// informações da cidade 1
        char estado1[3]; // BA
        char cidade1[20]; //Salvador
        char cod_carta1[10]; // A01
        int populacao1; //2.568.928
        float area_km1; //692,589 km²
        float PIB1; // R$ 62,954 bilhões
        int pontos_turisticos1; //> 50
// informações da cidade 2
        char estado2[3]; // PR
        char cidade2 [20];// Curitiba
        char cod_carta2[10];// A02
        int populacao2; // 1.829.225
        float area_km2; // 336,51 km²
        float PIB2; //R$ 98 bilhões,
        int pontos_turisticos2; // > 40
//inserindo dados da carta 1
       printf("Vamos começar?\n");
       printf("Digite o nome da 1ª cidade:\n");
       scanf("%s", cidade1);
       //printf("Legal! Você digitou: %s\n", cidade1);

       printf("Digite o Estado:\n");
       scanf("%s", estado1);
       //printf("Você digitou: %s\n", estado1);

       printf("Digite o Código da carta:\n");
       scanf("%s", cod_carta1);
       //printf("Você digitou: %s\n", cod_carta1);

       printf("Digite a População:\n");
       scanf("%i", &populacao1);
       //printf("Você digitou:%d habitantes\n", populacao1);

       printf("Digite a Área km²:\n");
       scanf("%f" , &area_km1);
       //printf("Você digitou: %.2f Km²\n", area_km1);

       printf("Qual é o PIB?\n");
       scanf("%f" , &PIB1);
       //printf("Você digitou: %.2f \n", PIB1);

       printf("A cidade possui quantos pontos turisticos?\n");
       scanf("%i" , &pontos_turisticos1);
       //printf("Você digitou: %i \n", pontos_turisticos1);
 
//Inserindo dados da Carta 2      
       printf("Agora vamos preencher a 2ª carta\n");

       printf("Digite o nome da cidade:\n");
       scanf("%s", cidade2);
       //printf("Legal! Você digitou: %s\n", cidade1);

       printf("Digite o Estado:\n");
       scanf("%s", estado2);
       //printf("Você digitou: %s\n", estado1);

       printf("Digite o Código da carta:\n");
       scanf("%s", cod_carta2);
       //printf("Você digitou: %s\n", cod_carta1);

       printf("Digite a População:\n");
       scanf("%i", &populacao2);
       //printf("Você digitou:%d habitantes\n", populacao1);

       printf("Digite a Área km²:\n");
       scanf("%f" , &area_km2);
       //printf("Você digitou: %.2f Km²\n", area_km1);

       printf("Qual é o PIB?\n");
       scanf("%f" , &PIB2);
       //printf("Você digitou: %.2f \n", PIB1);

       printf("A cidade possui quantos pontos turisticos?\n");
       scanf("%i" , &pontos_turisticos2);
       //printf("Você digitou: %i \n", pontos_turisticos1);

//informações digitadas para a primeira carta
       //printf("Primeira Carta: %s-%s-%s\n", cod_carta1, cidade1, estado1 );
       printf("***Primeira Carta***\n");
       printf("Código da Carta: %s \n" ,cod_carta1);
       printf("Cidade: %s\n", cidade1);
       printf("Estado: %s \n" , estado1);
       printf("População: %d habitantes\n", populacao1);
       printf("Área km²: %.2f Km²\n" , area_km1);
       printf("PIB: %.2f Bilhões\n", PIB1);
       printf("Pontos Turisticos: %i \n", pontos_turisticos1);

//informações digitadas para a segunda carta
       //printf("Segunda Carta: %s-%s-%s\n", cod_carta2, cidade2, estado2 );
       printf("***Segunda Carta***\n");
       printf("Código da Carta: %s \n" ,cod_carta2);
       printf("Cidade: %s\n", cidade2);
       printf("Estado: %s \n" , estado2);
       printf("População: %d habitantes \n", populacao2);
       printf("Área km²: %.2f Km²\n" , area_km2);
       printf("PIB: %.2f Bilhões\n", PIB2);
       printf("Pontos Turisticos: %i \n", pontos_turisticos2);

return 0;

}



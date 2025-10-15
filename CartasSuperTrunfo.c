#include <stdio.h>

// Estrutura que representa uma carta de cidade
struct CartaCidade {
    char estado;               // Letra de A a H
    int numeroCidade;          // Número de 1 a 4
    char codigo[4];            // Código da carta (ex: A01)
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB em bilhões de reais
    int pontosTuristicos;      // Número de pontos turísticos
};

int main() {
    // Declaração de uma carta
    struct CartaCidade carta;

    // Instruções para o usuário
    printf("=== Cadastro de Carta do Super Trunfo ===\n");

    // Entrada de dados
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &carta.estado);

    printf("Informe o Número da Cidade (1 a 4): ");
    scanf("%d", &carta.numeroCidade);

    // Geração do código da carta (ex: A01)
    sprintf(carta.codigo, "%c%02d", carta.estado, carta.numeroCidade);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta.pontosTuristicos);

    // Saída de dados formatada
    printf("\n=== Carta Cadastrada ===\n");
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("Estado: %c\n", carta.estado);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);

    return 0;
}
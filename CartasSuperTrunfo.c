#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
char Carta1[20];
char Carta2[20];
char Estado1[20];
char Estado2[20];
char Cidade1[20];
char Cidade2[20];
int Populacao1;
int Populacao2;
float Area1;
float Area2;
float PIB1;
float PIB2;
int Turismo1;
int Turismo2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Digite o numero da primeira Carta: \n");
    scanf ("%s", &Carta1);

    printf ("Digite o nome do primeiro Estado: \n");
    scanf ("%s", &Estado1);

    printf ("Digite o nome da primeira Cidade: \n");
    scanf ("%s", &Cidade1);

    printf ("Digite o número de habitantes da primeira cidade: \n");
    scanf ("%d", &Populacao1);

    printf ("Digite a area (km) da primeira cidade: \n");
    scanf ("%f", &Area1);

    printf ("Digite o PIB da primeira cidade: \n");
    scanf ("%f", &PIB1);

    printf ("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf ("%d", &Turismo1);

    printf ("Digite o numero da carta do segundo Estado: \n");
    scanf ("%s", &Carta2);

    printf ("Digite o nome do segundo Estado: \n");
    scanf ("%s", &Estado2);

    printf ("Digite o nome da segunda Cidade: \n");
    scanf ("%s", &Cidade2);

    printf ("Digite o numero de habitantes da segunda cidade: \n");
    scanf ("%d", &Populacao2);

    printf ("Digite a area (km) da segunda cidade: \n");
    scanf ("%f", &Area2);

    printf ("Digite o PIB da segunda cidade: \n");
    scanf ("%f", &PIB2);

    printf ("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf ("%d", &Turismo2);

    
    
    printf ("Carta: %s\n", Carta1);
    printf ("Nome do Estado: %s\n", Estado1);
    printf ("Nome da Cidade: %s\n", Cidade1);
    printf ("Populacao: %d\n", Populacao1);
    printf ("Area da cidade: %f\n", Area1);
    printf ("PIB: %f\n", PIB1);
printf ("Turismo: %d\n\n", Turismo1);





printf ("Carta: %s\n", Carta2);
printf ("Nome do Estado: %s\n", Estado2);
printf ("Nome da cidade: %s\n", Cidade2);
printf ("Populacao: %d\n", Populacao2);
printf ("Area da cidade: %f\n", Area2);
printf ("PIB: %f\n", PIB2);
printf ("Turismo: %d\n", Turismo2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

// ----------------------------------------

// Criação de variáveis:

char cidade[50], código[4], cidade2[50], código2[4];
int populacao, pontos_turísticos, populacao2, pontos_turísticos2;    
float área, pib, área2, pib2, densidadepopulacional1,densidadepopulacional2, pibpercapta1, pibpercapta2; 
//Float pode acabar renderizando zeros a mais.

// ----------------------------------------

/*
Apesar de considerar o tipo float mais adequado em alguns cenários (ex.: permitir números fracionados),
utilizarei o tipo int conforme solicitado no enunciado."

OBS: Tomar cuidado com os valores digitados, já que cada variável aceita um determinado tipo de formato como ensinado.
O tipo float pode incluir zeros a mais, exemplo: 500km / render: 500.000 KM 
Uma possibilidade seria armazenar como string para preservar exatamente o formato digitado, mas seguirei com float, conforme indicado.
*/

// Código principal:

// (Carta 1)

printf("---- Super trunfo ----\n");  //nome do jogo
printf("Versão do jogo: 0.0.1\n"); //versão do jogo (iniciante 0.0.1)

printf("-----------------------\n");
printf("Carta 01 - Super trunfo\n");
printf("\n");

printf("Digite o nome da cidade: \n");
scanf("%49s", cidade);

printf("Digite o código da cidade: \n");
scanf("%3s", código);

printf("Área da cidade: \n");
scanf("%f", &área);

printf("População: \n");
scanf("%d", &populacao);

printf("Pib: \n");
scanf("%f", &pib);

printf("Pontos turísticos: \n");
scanf("%d", &pontos_turísticos);
printf("\n"); //Organizar.

// Anúncio termino carta UM.

printf("---------------------------\n"); //para organizar a tela.

printf("Carta número UM finalizada.\n"); //Anúncio de finalização da carta 1.

printf("---------------------------\n"); //para organizar a tela.

printf("\n"); //Para pular mais uma linha, organizando a tela.

//Inicialização da carta 02:

printf("Carta 02 - Super trunfo\n"); //Boot carta 02.
printf("\n");

printf("Digite o nome da cidade: \n");
scanf("%49s", cidade2);

printf("Digite o código da cidade: \n");
scanf("%3s", código2);

printf("Área da cidade: \n");
scanf("%f", &área2);

printf("População: \n");
scanf("%d", &populacao2);

printf("Pib: \n");
scanf("%f", &pib2);

printf("Pontos turísticos: \n");
scanf("%d", &pontos_turísticos2);

// Carta 02 finalizada.

// ---------------------------------------------------

// Calculo de média (densidade populacional):

densidadepopulacional1 = populacao / área;
densidadepopulacional2 = populacao2 / área2;

// pibpercapta:

pibpercapta1 = pib / populacao;
pibpercapta2 = pib2 / populacao2;

// ---------------------------------------------------

//Renderização dos atributos incluidos nas cartas:

printf("---------------------------\n"); //para organizar a tela.
printf("Cartas registradas com sucesso! \n"); //Anúncio de registro.
printf("---------------------------\n"); //para organizar a tela.

printf("-------[Carta 01]--------\n"); //Exibição carta 01.

printf("Cidade: %s\n", cidade);
printf("Código da cidade: %s\n", código);
printf("Área: %f KM\n", área);       //Por ser FLOAT ele deve renderizar zeros a mais, se colocar %.0f ele renderiza menos porém se a área for 300.000 ai sai só 300.
printf("População: %d\n", populacao);       
printf("PIB: %.2f\n", pib);
printf("Pontos turísticos: %d\n", pontos_turísticos);
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
printf("PIB per capita: %.2f reais\n", pibpercapta1);

printf("-------[Carta 02]--------\n"); //Exibição carta 02.

printf("Cidade: %s\n", cidade2);
printf("Código da cidade: %s\n", código2);
printf("Área: %f KM\n", área2);
printf("População: %d\n", populacao2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turísticos2);
printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
printf("PIB per capita: %.2f reais\n", pibpercapta2);

printf("---------------------------\n"); //para organizar a tela.

//-------------------------------------------------------------------------------

    return 0; //Finalizando o código.

}

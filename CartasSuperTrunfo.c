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
int população, pontos_turísticos, população2, pontos_turísticos2;    
float área, pib, área2, pib2;

// ----------------------------------------

/*
Pede-se que seja a população como INT, porém acho o FLOAT melhor.
Um exemplo é que na minha cidade tem por volta de 43.200 habitantes, no int, não é possível,
incluir números "quebrados", mas seguirei com o INT assim como solicitado.

OBS: Tomar cuidado com os valores digitados, já que cada variável aceita um determinado tipo de formato como ensinado.
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
scanf("%d"), &população;

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
scanf("%d"), &população2;

printf("Pib: \n");
scanf("%f", &pib2);

printf("Pontos turísticos: \n");
scanf("%d", &pontos_turísticos2);

// Carta 02 finalizada.

//Renderização dos atributos incluidos nas cartas:

printf("---------------------------\n"); //para organizar a tela.
printf("Cartas registradas com sucesso! \n"); //Anúncio de registro.
printf("---------------------------\n"); //para organizar a tela.

printf("-------[Carta 01]--------\n"); //Exibição carta 01.

printf("Cidade: %s\n", cidade);
printf("Código da cidade: %s\n", código);
printf("Área: %f KM\n", área);
printf("População: %d\n", população);
printf("PIB: %f\n", pib);
printf("Pontos turísticos: %d\n", pontos_turísticos);

printf("-------[Carta 02]--------\n"); //Exibição carta 02.

printf("Cidade: %s\n", cidade2);
printf("Código da cidade: %s\n", código2);
printf("Área: %f KM\n", área2);
printf("População: %d\n", população2);
printf("PIB: %f\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turísticos2);

printf("---------------------------\n"); //para organizar a tela.

//-------------------------------------------------------------------------------

    return 0; //Finalizando o código.

}

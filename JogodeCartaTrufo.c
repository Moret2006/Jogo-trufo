#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
/* 
estado = Letra incial do Estado.
Ex: Maranhão = M

cc = codigo da carta 
Obs1: o codigo da carta deve começar com a letra do "estado" e em seguida um numero.
Obs2: o codigo da carta só poderar ter no maxímo 3 caracterizes. 
Ex: M01

nc = nome da carta.
ex: Maranhão

populacao = numero de habitantes no Estado.
Ex: Maranhão = 120.000

Valor = Nivel de poder da carta.
Ex: Maranhão = 100

Km = tamanho do estado.
Ex: Maranhão = 230.000

PIB = Produto0 Interno bruto.
Ex: Maranhão = 120.000

densidadep = densidade populacional que é feito a divisao de "populacao" por "km".

pibperc = PIB por capita que é feito a divisao de "PIB" por "populacao".

SuperPower = É realizada a soma de todos os valores numericos da carta.
*/
    // Primeira carta
    char Letra;
    char Estado[10], Cod[4];
    int populacao;
    int valor;
    float km;
    float PIB;
    float densidadep;
    float pibperc;
    float SuperPowerA;
    int crime;

    // Segunda carta
    char letra2;
    char estado[10], cod1[4];
    int populacao1;
    int valor1;
    float km1;
    float PIB1;
    float densidadep1;
    float pibperc1;
    float SuperPowerB;
    int crime1;

    //resultado
    int resultado;

    //Menu
    int opcao;
//menu
printf("***Super Trufo***\n");
printf("1. Jogar\n");
printf("2. regras\n");
printf("3. sair\n");
printf("Escolha uma opcao\n");
scanf("%d", &opcao);
switch(opcao)
{
case 1:
//primeira carta
printf("* Primeira carta *\n");
printf("Qual Estado você escolhe?\n");
scanf("%s",Estado);

printf("Digite a inical do Estado escolhido:\n");
scanf(" %c",&Letra);

printf("Digite o codigo da carta:\n");
scanf("%s",Cod); //n sei oq esta errado

printf("Quantos habitantes tem no Estado escolhido?\n");
scanf("%d",&populacao);

printf("Qual valor do PIB do Estado escolhido?\n");
scanf("%f",&PIB);

printf("Quantos KM² tem o Estado escolhido?\n");
scanf("%f",&km);

printf("Qual é o nivel de criminalidade?");
scanf("%d", &crime);

printf("Qual é o nivel do seu Estado?\n");
scanf("%d",&valor);
printf("\n");

//segunda carta

printf("* segunda carta *\n");
printf("Qual Estado você escolhe?\n");
scanf("%s",estado);

printf("Digite a inical do Estado escolhido:\n");
scanf(" %c",&letra2);

printf("Digite o codigo da carta:\n");
scanf("%s",cod1); //n sei oq esta errado

printf("Quantos habitantes tem no Estado escolhido?\n");
scanf("%d",&populacao1);

printf("Qual valor do PIB do Estado escolhido?\n");
scanf("%f",&PIB1);

printf("Quantos KM² tem o Estado escolhido?\n");
scanf("%f",&km1);

printf("Qual é o nivel de criminalidade?\n");
scanf("%d", &crime);

printf("Qual é o nivel do seu Estado?\n");
scanf("%d",&valor1);

//parte dos calculos 
densidadep = (float) populacao / km;
densidadep1 = (float) populacao1 / km1;

pibperc = (float) PIB / populacao;
pibperc1 = (float) PIB1 / populacao1;

SuperPowerA = (float) populacao + PIB + km + valor + densidadep + pibperc - crime;
SuperPowerB = (float) populacao1 + PIB1 + km1 + valor1 + densidadep1 + pibperc1 - crime1;

resultado = SuperPowerA > SuperPowerB;

//primeira carta
printf("Atributos da primeira carta:\n");
printf("\n");
printf("Estado: %s\n",Estado);
printf("letra: %c\n",Letra);
printf("Codigo: %s\n",Cod);
printf("População: %d\n",populacao);
printf("PIB: %.3f\n",PIB);
printf("KM²: %.3f\n", km);
printf("Valor: %d\n",valor);
printf("Densidade Populacional: %f \n", densidadep);
printf("PIB por capita: %.2f\n", pibperc);
printf("O valor do seu super é: %.2f\n", SuperPowerA);
printf("\n");

//segunda carta
printf("Atributos da segunda carta:\n");
printf("\n");
printf("Estado: %s\n",estado);
printf("letra: %c\n",letra2);
printf("Codigo: %s\n",cod1);
printf("População: %d\n",populacao1);
printf("PIB: %.3f\n",PIB1);
printf("KM²: %.3f\n", km1);
printf("Valor: %d \n",valor1);
printf("Densidade Populacional: %f \n", densidadep1);
printf("PIB por capita: %.2f\n", pibperc1);
printf("O valor do seu super é: %.2f\n", SuperPowerB);

//Final do programa (Hora do resultado)
if (SuperPowerA > SuperPowerB)
printf("*Carta %s ganhou*", Estado);
else
printf("*Carta %s ganhou*", estado);
    break;
case 2:
printf("regras do jogo...");
    break;

    case 3:
    printf("Saiu do jogo!");
    break;
}
}